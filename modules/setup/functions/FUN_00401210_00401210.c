/* Module: Setup.exe
   Function: FUN_00401210
   Address: 00401210
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00401210(void)

{
  _SfMessageBox_16((HWND)0x0,
                   "Command-line usage:\n\n-q\t\tDo a silent (quiet) installation.\n-a <path>\t\tDo an administrative install to <path>.\n-l <language id>\tInstall using the specified language.\n-p <path>\t\tChange the default install location to <path>.\n-r <appname>\tSet runonce application to <appname>.\n-s <path>\t\tChange the default Shared Components location to <path>.\n\n-? or -h\t\tDisplay this help dialog.\n\nAll pathnames must be complete (not relative)."
                   ,"Sonic Foundry Setup",0);
  return;
}


