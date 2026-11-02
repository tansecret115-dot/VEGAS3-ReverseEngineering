/* Module: vegas30.exe
   Function: FUN_0048a7f0
   Address: 0048a7f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0048a7f0(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  LPCSTR lpString2;
  LPCSTR lpString2_00;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = 0;
  if ((param_2 != 0) && (*(int *)(param_2 + 0x50) != 0)) {
    iVar2 = *(int *)(*(int *)(param_2 + 0x50) + 0x18);
  }
  if ((param_3 != 0) && (*(int *)(param_3 + 0x50) != 0)) {
    iVar1 = *(int *)(*(int *)(param_3 + 0x50) + 0x18);
  }
  if (iVar2 == 0) {
    return -(uint)(iVar1 != 0);
  }
  if (iVar1 == 0) {
    return 1;
  }
  lpString2 = (LPCSTR)FUN_005f2d10();
  lpString2_00 = (LPCSTR)FUN_005f2d10();
  FUN_0060ac30();
  FUN_0060ac30();
  lstrcpynA(&stack0xfffffff0,lpString2_00,0x105);
  lstrcpynA(&stack0xfffffff0,lpString2,0x105);
  iVar2 = lstrcmpA(&stack0xfffffff0,&stack0xfffffff0);
  return iVar2;
}


