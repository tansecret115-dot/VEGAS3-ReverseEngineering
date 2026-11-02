/* Module: rmto3260.dll
   Function: FUN_662c3c70
   Address: 662c3c70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_662c3c70(int param_1,ushort param_2,undefined2 *param_3,undefined2 *param_4)

{
  void *this;
  undefined2 *puVar1;
  undefined4 *puVar2;
  ushort uVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  this = *(void **)(param_1 + 0x30);
  if (this == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (ushort)*(undefined4 *)((int)this + 0x10);
  }
  if (uVar3 <= param_2) {
    uVar4 = 0x40012;
  }
  puVar2 = FUN_662eda80(this,(uint)param_2);
  puVar2 = (undefined4 *)FUN_662ed950((int)puVar2);
  puVar1 = (undefined2 *)*puVar2;
  if (puVar1 == (undefined2 *)0x0) {
    return 0x40012;
  }
  *param_3 = *puVar1;
  *param_4 = puVar1[1];
  return uVar4;
}


