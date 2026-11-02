/* Module: rmto3260.dll
   Function: FUN_662d62d0
   Address: 662d62d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_662d62d0(void *this,undefined4 *param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  iVar1 = FUN_662d5a90((char *)*param_1,&DAT_6630ac20);
  if (iVar1 != 0) {
    pcVar2 = FUN_662d57f0((int)this);
    *param_1 = pcVar2;
    iVar1 = FUN_662d5a90(pcVar2,&DAT_6630abe0);
    if (iVar1 != 0) {
      pcVar2 = FUN_662d57f0((int)this);
      *param_1 = pcVar2;
      iVar1 = FUN_662d5a90(pcVar2,&DAT_6630ac24);
      if (iVar1 != 0) {
        uVar3 = 1;
      }
    }
  }
  return uVar3;
}


