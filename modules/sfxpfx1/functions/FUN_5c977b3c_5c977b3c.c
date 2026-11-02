/* Module: sfxpfx1.dll
   Function: FUN_5c977b3c
   Address: 5c977b3c
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5c977b3c(int param_1,undefined4 *param_2)

{
  int iVar1;
  void *this;
  undefined4 *puVar2;
  
  if (param_2 == (undefined4 *)0x0) {
    iVar1 = -0x7fffbffd;
  }
  else {
    this = (void *)FUN_5c942900(0x14);
    if (this == (void *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = FUN_5c977176(this,param_1 + -0xc);
    }
    *param_2 = puVar2;
    iVar1 = (-(uint)(puVar2 != (undefined4 *)0x0) & 0x7ff8fff2) + 0x8007000e;
  }
  return iVar1;
}


