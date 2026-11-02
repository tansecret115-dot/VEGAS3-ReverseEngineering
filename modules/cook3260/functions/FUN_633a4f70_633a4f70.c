/* Module: cook3260.dll
   Function: FUN_633a4f70
   Address: 633a4f70
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_633a4f70(void *this,float *param_1,int param_2,int param_3)

{
  code *pcVar1;
  int iVar2;
  
  iVar2 = (int)(0x400 / (longlong)*(int *)((int)this + 4)) * *(int *)((int)this + 0xc) + -0x1c;
  if (iVar2 < 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (0x18 < iVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (iVar2 < 0x17) {
    FUN_633a4fd0(param_1,(float *)(param_3 * 0x30 + 0x16b14 + (int)this),
                 (float *)(&DAT_633a8fc0 + iVar2 * 0x3c),3,param_2);
  }
  return;
}


