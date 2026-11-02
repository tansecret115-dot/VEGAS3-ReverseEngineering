/* Module: vegas30k.dll
   Function: FUN_011c6190
   Address: 011c6190
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_011c6190(int param_1,int param_2,undefined4 param_3,int param_4,int param_5,undefined4 *param_6,
            int *param_7)

{
  int iVar1;
  HGLOBAL pvVar2;
  LPVOID pvVar3;
  undefined4 uVar4;
  
  uVar4 = 0x8000ffff;
  *param_6 = 0;
  *param_7 = 0;
  if (*(int *)(param_1 + 0x1b0) != 0 || *(int *)(param_1 + 0x1b4) != 0) {
    iVar1 = ftol();
    *param_7 = iVar1;
    uVar4 = 0x8007000e;
    pvVar2 = GlobalAlloc(2,(uint)*(ushort *)(param_5 + 0xc) * iVar1);
    pvVar3 = GlobalLock(pvVar2);
    *param_6 = pvVar3;
    if (pvVar3 != (LPVOID)0x0) {
      *(int *)(param_2 + 0x1f8) = param_4 * 2;
      *(int *)(param_2 + 0x1fc) = param_4 * 2 + 1;
      return 0;
    }
  }
  if ((LPCVOID)*param_6 != (LPCVOID)0x0) {
    pvVar2 = GlobalHandle((LPCVOID)*param_6);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle((LPCVOID)*param_6);
    GlobalFree(pvVar2);
  }
  *param_6 = 0;
  return uVar4;
}


