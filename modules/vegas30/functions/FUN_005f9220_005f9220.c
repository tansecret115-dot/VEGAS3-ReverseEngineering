/* Module: vegas30.exe
   Function: FUN_005f9220
   Address: 005f9220
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005f9220(undefined4 param_1,int param_2,LPCSTR param_3)

{
  LPCSTR lpFileName;
  BOOL BVar1;
  char *pcVar2;
  CHAR local_28 [40];
  
  if (param_2 == 0) {
    pcVar2 = "Key%d";
  }
  else {
    if (param_2 != 1) goto LAB_005f925d;
    pcVar2 = "Attributes%d";
  }
  SfPrintF(local_28,pcVar2,param_1);
LAB_005f925d:
  lpFileName = (LPCSTR)FUN_005f8b10();
  BVar1 = WritePrivateProfileStringA("Video Media Profiles",local_28,param_3,lpFileName);
  if (BVar1 != 0) {
    return 0;
  }
  return 0x8004e009;
}


