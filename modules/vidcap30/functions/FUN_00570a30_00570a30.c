/* Module: vidcap30.exe
   Function: FUN_00570a30
   Address: 00570a30
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_00570a30(int param_1,HKEY param_2,HKEY param_3)

{
  int iVar1;
  LSTATUS LVar2;
  BYTE local_1c [28];
  
  iVar1 = FUN_00570b50(local_1c,param_2,param_3);
  if (-1 < iVar1) {
    LVar2 = RegOpenKeyExA((HKEY)0x80000002,(LPCSTR)(param_1 + 0x70),0,0x20006,&param_2);
    if (LVar2 == 0) {
      LVar2 = RegOpenKeyExA(param_2,"License",0,0x20006,&param_3);
      if (LVar2 == 0) {
        LVar2 = RegSetValueExA(param_3,"CurrentKey",0,1,local_1c,0x19);
        if (LVar2 == 0) {
          iVar1 = 0;
        }
        RegCloseKey(param_3);
      }
      RegCloseKey(param_2);
    }
  }
  return iVar1;
}


