/* Module: vegas30.exe
   Function: FUN_005b18f0
   Address: 005b18f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005b18f0(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  float fVar4;
  int iVar5;
  int in_stack_00000830;
  int in_stack_00001050;
  float *in_stack_00001058;
  undefined4 *in_stack_0000105c;
  
  FUN_0060ac30();
  iVar5 = 0;
  if (in_stack_00001058[4] == 2.8026e-45) {
    in_stack_00001058[4] = 0.0;
    *in_stack_00001058 = (float)in_stack_0000105c[0x107];
    in_stack_00001058[1] = (float)in_stack_0000105c[0x108];
    in_stack_00001058[2] = (float)in_stack_0000105c[0x109];
  }
  else {
    if (in_stack_00001058[4] != 1.4013e-45) {
      iVar1 = FUN_005b1150();
      if ((iVar1 != 0) && (iVar1 != 1)) {
        if (iVar1 != 3) {
          return 0;
        }
        puVar2 = in_stack_0000105c;
        puVar3 = (undefined4 *)&stack0x00000014;
        for (iVar1 = 0x208; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar3 = *puVar2;
          puVar2 = puVar2 + 1;
          puVar3 = puVar3 + 1;
        }
        puVar2 = (undefined4 *)&stack0x00000834;
        for (iVar1 = 0x208; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar2 = *in_stack_0000105c;
          in_stack_0000105c = in_stack_0000105c + 1;
          puVar2 = puVar2 + 1;
        }
        FUN_005b1000();
        FUN_005b1000();
        if ((2 < in_stack_00000830) && (iVar5 = FUN_005b18f0(), iVar5 < 0)) {
          return iVar5;
        }
        if (in_stack_00001050 < 3) {
          return iVar5;
        }
      }
      iVar5 = FUN_005b18f0();
      return iVar5;
    }
    in_stack_00001058[4] = 0.0;
    *in_stack_00001058 = (float)in_stack_0000105c[0x107];
    in_stack_00001058[1] = (float)in_stack_0000105c[0x108];
    in_stack_00001058[2] = (float)in_stack_0000105c[0x109];
  }
  fVar4 = SfVector3DDot((float *)(in_stack_0000105c + 0x10a),in_stack_00001058);
  in_stack_00001058[3] = fVar4;
  iVar5 = FUN_005b1890();
  if (iVar5 < 0) {
    return iVar5;
  }
  return iVar5;
}


