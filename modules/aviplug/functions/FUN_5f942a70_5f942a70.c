/* Module: aviplug.dll
   Function: FUN_5f942a70
   Address: 5f942a70
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f942a70(undefined4 *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int local_c;
  undefined4 *local_8;
  int local_4;
  
  iVar1 = param_2[0x19d];
  local_8 = (undefined4 *)0x0;
  local_c = 0;
  local_4 = 0;
  if (iVar1 < 0) goto LAB_5f942b8d;
  iVar1 = FUN_5f941830(param_2,param_1[0x1e],&local_c);
  if (-1 < iVar1) {
    *(undefined4 *)(local_c + 0x14) = 1;
    iVar1 = FUN_5f9424e0(param_1,&local_8,(undefined4 *)(local_c + 0x10),
                         (undefined4 *)(local_c + 0x18));
    if (iVar1 == 0) {
      uVar3 = *(uint *)(local_c + 0x10);
      puVar4 = local_8;
      puVar5 = *(undefined4 **)(local_c + 8);
      for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      }
      if (param_1[0x24] != 0) {
        FUN_5f9420f0((undefined1 *)(param_1 + 0x14),*(undefined1 **)(local_c + 8));
      }
    }
    else if ((iVar1 == -0x7ffb1f4e) ||
            (iVar1 = FUN_5f942560(param_1,param_2,local_c,&local_8,&local_4), iVar1 != 0))
    goto LAB_5f942b59;
    if (((param_1[0x3b] == 0) || (iVar1 = FUN_5f942740(param_1,(int)param_2,local_c), -1 < iVar1))
       && (iVar1 = FUN_5f941c90(param_2,param_1[1],local_c), -1 < iVar1)) {
      uVar3 = param_1[8];
      param_1[8] = uVar3 + 1;
      param_1[9] = param_1[9] + (uint)(0xfffffffe < uVar3);
    }
  }
LAB_5f942b59:
  if (local_c != 0) {
    (**(code **)(local_c + 0x2c))(local_c);
  }
  if (local_8 != (undefined4 *)0x0) {
    if (local_4 != 0) {
      WaitForSingleObject((HANDLE)param_1[0x34],0xffffffff);
    }
    (**(code **)(*(int *)*param_1 + 0x40))((int *)*param_1,local_8);
  }
LAB_5f942b8d:
  if (iVar1 != -0x7ffb1f4e) {
    return iVar1;
  }
  iVar1 = FUN_5f9429d0((int)param_1,param_2);
  return iVar1;
}


