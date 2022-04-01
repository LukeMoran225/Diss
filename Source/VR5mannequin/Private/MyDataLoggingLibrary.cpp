// Fill out your copyright notice in the Description page of Project Settings.


#include "MyDataLoggingLibrary.h"

FString UMyDataLoggingLibrary::SaveStringToFile(FString Filename, FString Data) {

	FString directory = FPaths::GameSourceDir();
	FString result;
	IPlatformFile& file = FPlatformFileManager::Get().GetPlatformFile();
	uint32 WriteFlags = FILEWRITE_Append;

	if (file.CreateDirectory(*directory)) {
		FString myFile = directory + "/" + Filename;
		FFileHelper::SaveStringToFile(Data, *myFile,FFileHelper::EEncodingOptions::AutoDetect,&IFileManager::Get(), WriteFlags);
	}
	return Filename;
}