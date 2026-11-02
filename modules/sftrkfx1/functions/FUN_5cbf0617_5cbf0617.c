/* Module: sftrkfx1.dll
   Function: FUN_5cbf0617
   Address: 5cbf0617
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5cbf0617(int param_1,undefined4 *param_2)

{
  int iVar1;
  void *this;
  undefined4 *puVar2;
  
  if (param_2 == (undefined4 *)0x0) {
    iVar1 = -0x7fffbffd;
  }
  else {
    this = (void *)FUN_5cba1a90(0x30);
    if (this == (void *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = FUN_5cbf093d(this,param_1 + -0xc);
    }
    *param_2 = puVar2;
    iVar1 = (-(uint)(puVar2 != (undefined4 *)0x0) & 0x7ff8fff2) + 0x8007000e;
  }
  return iVar1;
}


