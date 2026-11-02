/* Module: vegas30k.dll
   Function: FUN_010695a0
   Address: 010695a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_010695a0(int param_1,LPCSTR param_2)

{
  HANDLE pvVar1;
  int iVar2;
  
  pvVar1 = CreateFileA(param_2,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  if (pvVar1 == (HANDLE)0xffffffff) {
    FUN_01070600(0xaaaaaaa4,"Open SEA",0);
    return -0x7ffb1ffa;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  iVar2 = FUN_01069ef0(pvVar1);
  if (-1 < iVar2) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x89c) = *(undefined4 *)(param_1 + 0x40);
    *(undefined4 *)(param_1 + 0x1c) = 0;
    return iVar2;
  }
  FUN_01070600(0xaaaaaaa5,"Open SEA",0);
  return -0x7ffb1f50;
}


