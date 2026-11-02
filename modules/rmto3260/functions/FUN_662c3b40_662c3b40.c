/* Module: rmto3260.dll
   Function: FUN_662c3b40
   Address: 662c3b40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_662c3b40(int param_1,ushort param_2,int *param_3)

{
  void *this;
  undefined4 *puVar1;
  int *piVar2;
  ushort uVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  this = *(void **)(param_1 + 0x34);
  if (this == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (ushort)*(undefined4 *)((int)this + 0x10);
  }
  if (uVar3 <= param_2) {
    uVar4 = 0x40012;
  }
  puVar1 = FUN_662eda80(this,(uint)param_2);
  piVar2 = (int *)FUN_662ed950((int)puVar1);
  if (*piVar2 == 0) {
    *param_3 = 0;
    return 0x40012;
  }
  *param_3 = *piVar2;
  return uVar4;
}


