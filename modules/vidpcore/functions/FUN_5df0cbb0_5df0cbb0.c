/* Module: vidpcore.dll
   Function: FUN_5df0cbb0
   Address: 5df0cbb0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_5df0cbb0(int param_1,HKEY param_2,HKEY param_3)

{
  int iVar1;
  LSTATUS LVar2;
  BYTE local_1c [28];
  
  iVar1 = FUN_5df0ccd0(local_1c,param_2,param_3);
  if (-1 < iVar1) {
    LVar2 = RegOpenKeyExA((HKEY)&DAT_80000002,(LPCSTR)(param_1 + 0x70),0,0x20006,&param_2);
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


