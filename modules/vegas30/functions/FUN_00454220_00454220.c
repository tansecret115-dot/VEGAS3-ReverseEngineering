/* Module: vegas30.exe
   Function: FUN_00454220
   Address: 00454220
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x00454297) */

undefined4 FUN_00454220(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (param_2 < 0) {
    uVar2 = 2;
  }
  else {
    uVar2 = __allshl();
  }
  uVar2 = __allmul(*(int *)(param_1 + 0xb98),*(int *)(param_1 + 0xb98) >> 0x1f,uVar2);
  uVar2 = __allmul(uVar2,0xb,0);
  lVar3 = __alldiv(uVar2,2,0);
  uVar1 = (int)lVar3;
  if (*(longlong *)(param_1 + 0x600) < lVar3) {
    uVar1 = *(undefined4 *)(param_1 + 0x600);
  }
  return uVar1;
}


