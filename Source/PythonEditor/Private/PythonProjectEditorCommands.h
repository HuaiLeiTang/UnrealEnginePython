// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Commands.h"

class FPythonProjectEditorCommands : public TCommands<FPythonProjectEditorCommands>
{
public:
	FPythonProjectEditorCommands();

	TSharedPtr<FUICommandInfo> New;
	TSharedPtr<FUICommandInfo> Delete;
	TSharedPtr<FUICommandInfo> Save;
	TSharedPtr<FUICommandInfo> SaveAll;
	TSharedPtr<FUICommandInfo> Execute;
	/** Initialize commands */
	virtual void RegisterCommands() override;
};