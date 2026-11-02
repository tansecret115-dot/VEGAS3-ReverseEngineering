/* Module: oggplug.dll
   Function: FUN_00442e50
   Address: 00442e50
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_00442e50(int *param_1,int param_2)

{
  int *piVar1;
  void *pvVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint extraout_EDX;
  undefined4 extraout_EDX_00;
  int iVar7;
  int local_10 [4];
  
  pvVar2 = realloc((void *)param_1[0x12],param_1[0xd] << 5);
  param_1[0x12] = (int)pvVar2;
  pvVar2 = realloc((void *)param_1[0x13],param_1[0xd] << 5);
  param_1[0x13] = (int)pvVar2;
  pvVar2 = malloc(param_1[0xd] << 3);
  param_1[0xf] = (int)pvVar2;
  pvVar2 = malloc(param_1[0xd] << 3);
  param_1[0x11] = (int)pvVar2;
  pvVar2 = malloc(param_1[0xd] << 2);
  param_1[0x10] = (int)pvVar2;
  iVar7 = 0;
  if (0 < param_1[0xd]) {
    do {
      if (iVar7 == 0) {
        piVar1 = (int *)param_1[0xf];
        *piVar1 = param_2;
        piVar1[1] = param_2 >> 0x1f;
      }
      else {
        FUN_00442cc0(param_1,*(int *)(param_1[0xe] + iVar7 * 8));
        iVar3 = FUN_00442850(param_1,(uint *)(iVar7 * 0x20 + param_1[0x12]),
                             (int *)(iVar7 * 0x10 + param_1[0x13]),(undefined4 *)0x0,(int *)0x0);
        if (iVar3 < 0) {
          iVar3 = param_1[0xf];
          *(undefined4 *)(iVar3 + iVar7 * 8) = 0xffffffff;
          *(undefined4 *)(iVar3 + 4 + iVar7 * 8) = 0xffffffff;
        }
        else {
          iVar3 = param_1[0xf];
          *(int *)(iVar3 + iVar7 * 8) = param_1[2];
          *(int *)(iVar3 + 4 + iVar7 * 8) = param_1[3];
          FUN_00441080(param_1 + 0x1e);
        }
      }
      FUN_00442cc0(param_1,*(int *)(param_1[0xe] + 8 + iVar7 * 8));
      while (uVar4 = FUN_00442be0(param_1,local_10), -1 < (int)uVar4) {
        uVar5 = FUN_00440e30(local_10);
        if ((uVar5 & extraout_EDX) != 0xffffffff) {
          uVar6 = FUN_00440f10(local_10);
          *(undefined4 *)(param_1[0x10] + iVar7 * 4) = uVar6;
          uVar4 = FUN_00440e30(local_10);
          iVar3 = param_1[0x11];
          *(uint *)(iVar3 + iVar7 * 8) = uVar4;
          *(undefined4 *)(iVar3 + 4 + iVar7 * 8) = extraout_EDX_00;
          goto LAB_00442fc1;
        }
        param_1[2] = uVar4;
        param_1[3] = (int)uVar4 >> 0x1f;
      }
      FUN_00430070((undefined4 *)(iVar7 * 0x20 + param_1[0x12]));
      FUN_0042ffd0((int *)(iVar7 * 0x10 + param_1[0x13]));
LAB_00442fc1:
      iVar7 = iVar7 + 1;
    } while (iVar7 < param_1[0xd]);
  }
  return;
}


