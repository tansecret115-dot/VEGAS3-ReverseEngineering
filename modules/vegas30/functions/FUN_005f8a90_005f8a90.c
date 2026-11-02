/* Module: vegas30.exe
   Function: FUN_005f8a90
   Address: 005f8a90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005f8a90(uint param_1,int param_2,LPSTR param_3,DWORD param_4)

{
  LPCSTR lpFileName;
  DWORD DVar1;
  char *pcVar2;
  CHAR local_28 [40];
  
  if (param_2 == 0) {
    pcVar2 = "Key%d";
  }
  else {
    if (param_2 != 1) goto LAB_005f8acd;
    pcVar2 = "Attributes%d";
  }
  SfPrintF(local_28,pcVar2,param_1);
LAB_005f8acd:
  param_1 = param_1 & 0xffffff00;
  lpFileName = (LPCSTR)FUN_005f8b10();
  DVar1 = GetPrivateProfileStringA
                    ("Video Media Profiles",local_28,(LPCSTR)&param_1,param_3,param_4,lpFileName);
  if (DVar1 != 0) {
    return 0;
  }
  return 0x8004e008;
}


