/* Module: sftrans1.dll
   Function: FUN_00537db0
   Address: 00537db0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00537db0(LPDWORD param_1)

{
  CHAR local_208 [260];
  CHAR local_104 [260];
  
  *param_1 = 0;
  GetWindowsDirectoryA(local_208,0x104);
  FUN_00537e20(local_208,local_104,0x104);
  GetVolumeInformationA(local_104,(LPSTR)0x0,0,param_1,(LPDWORD)0x0,(LPDWORD)0x0,(LPSTR)0x0,0);
  return 0;
}


