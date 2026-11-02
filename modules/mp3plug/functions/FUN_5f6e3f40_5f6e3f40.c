/* Module: mp3plug.dll
   Function: FUN_5f6e3f40
   Address: 5f6e3f40
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_5f6e3f40(int *param_1,int *param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int *local_2c;
  int *local_28;
  float *local_24;
  uint *local_20;
  int *local_1c;
  int *local_18;
  
  if ((param_1 == (int *)0x0) || (param_2 == (int *)0x0)) {
    iVar5 = 1;
  }
  else {
    fVar1 = (float)param_2[3];
    *param_1 = param_2[2];
    local_2c = param_1 + 0x252;
    local_28 = param_1 + 0x1fa;
    local_24 = (float *)(param_1 + 0x92);
    local_20 = (uint *)(param_1 + 0x142);
    local_1c = param_1 + 0xea;
    local_18 = param_1 + 3;
    piVar6 = param_1 + 1;
    iVar5 = 0;
    piVar4 = param_1;
    do {
      if (iVar5 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = 2;
      }
      FUN_5f6fe1f0(param_2[1],*param_2,fVar1,iVar2,piVar6);
      if (param_2[4] != 0) {
        piVar4[0x8c] = 0;
      }
      if (iVar5 == 0) {
        iVar2 = 0x240;
      }
      else {
        iVar2 = 0xc0;
      }
      FUN_5f6fabf0(iVar2,*param_2,piVar4[1],(int)local_18,(int)local_1c,local_20,local_24,
                   (int)(param_1 + 0x18d5),piVar4[0x91],(int)local_28,(int)local_2c);
      FUN_5f6fe4f0(piVar4[1],(int)piVar6);
      local_2c = local_2c + 0x2a9;
      local_28 = local_28 + 0x2a9;
      local_24 = local_24 + 0x2a9;
      local_20 = local_20 + 0x2a9;
      local_1c = local_1c + 0x2a9;
      local_18 = local_18 + 0x2a9;
      iVar5 = iVar5 + 1;
      piVar4 = piVar4 + 0x2a9;
      piVar6 = piVar6 + 0x2a9;
    } while (iVar5 < 2);
    iVar5 = FUN_5f6fc450((uint)(param_1 + 0x18d5));
    FUN_5f6fefa0();
    for (iVar2 = 0; (iVar5 == 0 && (iVar2 < param_2[2])); iVar2 = iVar2 + 1) {
      param_1[iVar2 * 0x9c1 + 0x554] = 0;
      param_1[iVar2 * 0x9c1 + 0xf13] = 0x3f800000;
      iVar3 = FUN_5f6fb520((undefined4 *)param_1[iVar2 * 0x9c1 + 0x553]);
      if ((iVar3 == 0) &&
         (((iVar3 = FUN_5f6fc2d0((uint *)param_1[iVar2 * 0x9c1 + 0x555]), iVar3 == 0 &&
           (iVar3 = FUN_5f6fcfb0(param_1 + iVar2 * 0x9c1 + 0x556), iVar3 == 0)) &&
          (iVar3 = FUN_5f6fe1e0(), iVar3 == 0)))) {
        if (iVar2 == 1) {
          if (param_1[0x87] == 0) {
            local_18 = (int *)0x3;
          }
          else {
            local_18 = (int *)0x0;
          }
          FUN_5f6d8cb0(local_18,param_1 + 0x1837,0x16);
          FUN_5f6d8cb0(local_18,param_1 + 0x1837,0x27);
        }
      }
      else {
        iVar5 = 1;
      }
    }
  }
  return iVar5;
}


