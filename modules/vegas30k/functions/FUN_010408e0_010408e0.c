/* Module: vegas30k.dll
   Function: FUN_010408e0
   Address: 010408e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_010408e0(undefined4 param_1,uint param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  uVar4 = 1;
  piVar1 = (int *)FUN_011376b0();
  iVar2 = FUN_011376d0();
  if (param_2 < 0xffff0006) {
    if (param_2 == 0xffff0005) {
      if (piVar1[0x4b] == 0) {
        return 1;
      }
      puVar3 = *(undefined4 **)(piVar1[0x4b] + 0x44);
    }
    else {
      if (param_2 < 0xffff0004) {
        if (param_2 == 0xffff0003) {
          iVar2 = piVar1[0x48];
        }
        else {
          if (param_2 == 0) {
            uVar4 = (**(code **)(*piVar1 + 0x48))();
            *param_3 = uVar4;
            return 0;
          }
          if (param_2 != 0xffff0002) {
            return 1;
          }
          iVar2 = piVar1[0x47];
        }
        if (iVar2 == 0) {
          return 1;
        }
        puVar3 = *(undefined4 **)(iVar2 + 0x44);
        if (puVar3 == (undefined4 *)0x0) {
          return 1;
        }
        *param_3 = *puVar3;
        param_3[1] = puVar3[1];
        param_3[2] = puVar3[2];
        param_3[3] = puVar3[3];
        *(undefined2 *)(param_3 + 4) = *(undefined2 *)(puVar3 + 4);
        return 0;
      }
      if (param_2 != 0xffff0004) {
        return 1;
      }
      if (piVar1[0x49] == 0) {
        return 1;
      }
      puVar3 = *(undefined4 **)(piVar1[0x49] + 0x44);
    }
  }
  else {
    switch(param_2) {
    case 0xffff0012:
      iVar2 = *(int *)(iVar2 + 0x11c);
      break;
    case 0xffff0013:
      iVar2 = *(int *)(iVar2 + 0x120);
      break;
    case 0xffff0014:
      iVar2 = *(int *)(iVar2 + 0x124);
      break;
    case 0xffff0015:
      if (*(int *)(iVar2 + 300) == 0) {
        return 1;
      }
      puVar3 = *(undefined4 **)(*(int *)(iVar2 + 300) + 0x44);
      if (puVar3 == (undefined4 *)0x0) {
        return 1;
      }
      goto LAB_01040a06;
    default:
      return 1;
    }
    if (iVar2 == 0) {
      return 1;
    }
    puVar3 = *(undefined4 **)(iVar2 + 0x44);
  }
  if (puVar3 != (undefined4 *)0x0) {
LAB_01040a06:
    uVar4 = 0;
    *param_3 = *puVar3;
    param_3[1] = puVar3[1];
    param_3[2] = puVar3[2];
    param_3[3] = puVar3[3];
    *(undefined2 *)(param_3 + 4) = *(undefined2 *)(puVar3 + 4);
  }
  return uVar4;
}


