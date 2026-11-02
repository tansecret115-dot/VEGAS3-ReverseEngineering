/* Module: rmbe3260.dll
   Function: FUN_66059730
   Address: 66059730
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_66059730(int *param_1)

{
  short *psVar1;
  int *piVar2;
  uint uVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined2 extraout_var;
  undefined4 extraout_EDX;
  int iVar6;
  undefined4 extraout_EDX_00;
  uint uVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  undefined4 local_18;
  undefined4 local_14;
  int *local_10;
  uint local_c;
  byte *local_8;
  
  piVar2 = param_1;
  local_c = 0;
  local_14 = 0;
  local_8 = (byte *)0x0;
  local_10 = (int *)0x0;
  uVar8 = (**(code **)*param_1)(param_1,&DAT_66064ee8,&local_10);
  param_1 = (int *)uVar8;
  do {
    if ((int)param_1 < 0) {
LAB_660598dc:
      if ((param_1 == (int *)0x4025c) || (param_1 == (int *)0x80040260)) {
LAB_660598ec:
        param_1 = (int *)0x0;
      }
      if (local_10 != (int *)0x0) {
        (**(code **)(*local_10 + 8))(local_10);
      }
      return (int)param_1;
    }
    param_1 = (int *)uVar8;
    if (param_1 == (int *)0x4025c) goto LAB_660598ec;
    if (param_1 == (int *)0x4025d) goto LAB_660598dc;
    uVar3 = FUN_66059a20(piVar2[0xd],CONCAT22((short)((ulonglong)uVar8 >> 0x30),(short)piVar2[8]));
    if ((short)piVar2[9] == 8) {
      uVar3 = uVar3 >> 1;
    }
    uVar8 = (**(code **)(*(int *)piVar2[0x14] + 0x28))
                      ((int *)piVar2[0x14],local_10,&local_8,piVar2[10],piVar2[0xb],uVar3,&local_c,
                       &local_14);
    param_1 = (int *)uVar8;
    if ((int)param_1 < 0) goto LAB_660598dc;
    if (param_1 != (int *)0x4025c) {
      uVar7 = local_c;
      if ((short)piVar2[9] == 8) {
        psVar1 = (short *)piVar2[0x16];
        for (; uVar3 != 0; uVar3 = uVar3 - 1) {
          *psVar1 = (*local_8 - 0x80) * 0x100;
          local_8 = local_8 + 1;
          psVar1 = psVar1 + 1;
        }
        local_8 = (byte *)piVar2[0x16];
        uVar7 = local_c * 2;
      }
      local_18 = 0;
      puVar4 = (undefined4 *)(**(code **)(*(int *)piVar2[0x13] + 0xc))(&local_18);
      if (puVar4 == (undefined4 *)0x0) {
        param_1 = (int *)0x8007000e;
        goto LAB_660598dc;
      }
      piVar5 = (int *)piVar2[0xc];
      puVar9 = puVar4;
      uVar3 = FUN_66059a00(uVar7,CONCAT22(extraout_var,(short)piVar2[8]));
      uVar3 = FUN_66059cc0((short *)local_8,uVar3,puVar9,piVar5);
      if ((int)uVar3 < 1) {
        uVar8 = CONCAT44(extraout_EDX,0x80040244);
      }
      else {
        uVar7 = piVar2[10];
        iVar6 = uVar7 + local_c;
        piVar2[10] = iVar6;
        piVar2[0xb] = piVar2[0xb] + (uint)CARRY4(uVar7,local_c);
        iVar6 = FUN_66059a20(uVar3,CONCAT22((short)((uint)iVar6 >> 0x10),
                                            *(undefined2 *)((int)piVar2 + 0x22)));
        if ((piVar2[0x11] != 0) &&
           (param_1 = (int *)(**(code **)(*piVar2 + 0x34))(piVar2,iVar6,uVar3,puVar4),
           (int)param_1 < 0)) goto LAB_660598dc;
        piVar5 = (int *)(**(code **)(*(int *)piVar2[0x15] + 0x10))
                                  ((int *)piVar2[0x15],puVar4,iVar6,local_14,piVar2[0x13]);
        if ((int)piVar5 < 0) {
          param_1 = piVar5;
        }
        iVar6 = FUN_6605a520(piVar2[0xe],piVar2[0xc]);
        uVar8 = CONCAT44(extraout_EDX_00,param_1);
        piVar2[0xd] = iVar6;
      }
    }
    param_1 = (int *)uVar8;
  } while( true );
}


