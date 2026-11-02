/* Module: wavplug.dll
   Function: FUN_5f3a9fb0
   Address: 5f3a9fb0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_5f3a9fb0(uint3 param_1,HANDLE param_2,LPCVOID param_3,DWORD param_4,undefined4 param_5,
            int *param_6)

{
  HANDLE hFile;
  BOOL BVar1;
  int iVar2;
  int iVar3;
  undefined4 uStack_4;
  
  hFile = param_2;
  uStack_4 = (uint)param_1;
  BVar1 = WriteFile(param_2,param_3,param_4,(LPDWORD)&param_3,(LPOVERLAPPED)0x0);
  if (BVar1 == 0) {
    return 0x8004e009;
  }
  if (((uint)param_3 & 7) != 0) {
    iVar3 = 0;
    iVar2 = 8 - ((uint)param_3 & 7);
    if (0 < iVar2) {
      do {
        BVar1 = WriteFile(hFile,(LPCVOID)((int)&uStack_4 + 3),1,(LPDWORD)&param_2,(LPOVERLAPPED)0x0)
        ;
        if (BVar1 == 0) {
          return 0x8004e009;
        }
        param_3 = (LPCVOID)((int)param_3 + 1);
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar2);
    }
  }
  if (param_6 != (int *)0x0) {
    *param_6 = (int)param_3;
    param_6[1] = 0;
  }
  return 0;
}


