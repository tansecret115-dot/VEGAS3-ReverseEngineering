/* Module: vegas30k.dll
   Function: FUN_011951f0
   Address: 011951f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_011951f0(int param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  int local_8;
  int iStack_4;
  
  *(undefined4 *)param_2 = 0;
  *(undefined4 *)((int)param_2 + 4) = 0;
  if (*(int *)(param_1 + 0x638) == 0) {
    return -0x7fff0001;
  }
  iVar1 = FUN_011952c0(&local_8);
  if (-1 < iVar1) {
    if ((local_8 == *(int *)(param_1 + 0x720)) && (iStack_4 == *(int *)(param_1 + 0x724))) {
      *(undefined4 *)param_2 = *(undefined4 *)(param_1 + 0x718);
      *(undefined4 *)((int)param_2 + 4) = *(undefined4 *)(param_1 + 0x71c);
      return 0;
    }
    local_8 = *(int *)(param_1 + 0x4fc);
    if (local_8 == 0) {
      *(undefined4 *)param_2 = 0;
      *(undefined4 *)((int)param_2 + 4) = 0;
      return 0;
    }
    iStack_4 = 0;
    uVar2 = ftol();
    *param_2 = uVar2;
    iVar1 = 0;
  }
  return iVar1;
}


