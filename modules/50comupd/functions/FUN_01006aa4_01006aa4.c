/* Module: 50comupd.exe
   Function: FUN_01006aa4
   Address: 01006aa4
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_01006aa4(undefined4 *param_1)

{
  int *piVar1;
  ushort uVar2;
  byte bVar3;
  ushort uVar4;
  int iVar5;
  uint local_18 [2];
  uint local_10;
  undefined4 local_c;
  int local_8;
  
  uVar2 = *(ushort *)((int)param_1 + 0xb2);
  piVar1 = param_1 + 0x25;
  uVar4 = uVar2 & 0xf;
  local_8 = 0;
  *piVar1 = 0x8000;
  if ((uVar2 & 0xf) == 0) {
    param_1[0x26] = 0x8000;
  }
  else {
    if (uVar4 == 1) {
      iVar5 = FUN_010059d3();
    }
    else if (uVar4 == 2) {
      local_c = param_1[8];
      local_10 = uVar2 >> 8 & 0x1f;
      iVar5 = FUN_010059d3();
    }
    else {
      if (uVar4 != 3) {
        if (uVar4 == 0xf) {
          return 1;
        }
        local_8 = 6;
        goto LAB_01006b6d;
      }
      local_18[0] = 1 << ((byte)(uVar2 >> 8) & 0x1f);
      iVar5 = FUN_01006e4f(piVar1,local_18,(undefined *)0x0,(undefined *)0x0,param_1 + 0x26,
                           (undefined4 *)0x0,0,0,0,0,0);
    }
    if (iVar5 != 0) {
      local_8 = 7;
    }
  }
LAB_01006b6d:
  iVar5 = local_8;
  if (local_8 != 0) goto LAB_01006c57;
  iVar5 = (*(code *)param_1[2])(param_1[0x26]);
  param_1[0xf] = iVar5;
  if (iVar5 != 0) {
    iVar5 = (*(code *)param_1[2])(*piVar1);
    param_1[0x10] = iVar5;
    if (iVar5 != 0) {
      bVar3 = *(byte *)((int)param_1 + 0xb2) & 0xf;
      if (bVar3 == 1) {
        iVar5 = FUN_010059d3();
LAB_01006c2e:
        if (iVar5 != 0) {
          local_8 = (-(uint)(iVar5 != 1) & 2) + 5;
        }
      }
      else {
        if (bVar3 == 2) {
          iVar5 = FUN_010059d3();
          goto LAB_01006c2e;
        }
        if (bVar3 == 3) {
          iVar5 = FUN_01006e4f(piVar1,local_18,(undefined *)param_1[2],(undefined *)param_1[1],
                               param_1 + 0x26,param_1 + 0xd,param_1[3],param_1[4],param_1[5],
                               param_1[6],param_1[7]);
          goto LAB_01006c2e;
        }
      }
      if (local_8 == 0) {
        return 1;
      }
      (*(code *)param_1[1])(param_1[0xf]);
      (*(code *)param_1[1])(param_1[0x10]);
      iVar5 = local_8;
      goto LAB_01006c57;
    }
    (*(code *)param_1[1])(param_1[0xf]);
  }
  iVar5 = 5;
LAB_01006c57:
  FUN_01006dcb((undefined4 *)*param_1,iVar5,0);
  *(undefined2 *)((int)param_1 + 0xb2) = 0xf;
  return 0;
}


