/* Module: vegas30k.dll
   Function: FUN_011a5ed0
   Address: 011a5ed0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_011a5ed0(int *param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  HGLOBAL pvVar2;
  LPVOID pvVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  undefined4 uVar9;
  
  iVar8 = 0;
  uVar9 = 1;
  piVar7 = *(int **)(param_1[4] + 0xc);
  if (piVar7 == (int *)0x0) {
    return 1;
  }
  if (*piVar7 == 0) {
    return 1;
  }
  iVar5 = param_1[2];
  if (*piVar7 <= iVar5) {
    return 1;
  }
  iVar1 = *(int *)(piVar7[2] + iVar5 * 4);
  if (iVar1 == 0) {
    return 1;
  }
  piVar7 = *(int **)(iVar1 + 0x118);
  if (piVar7 == (int *)0x0) {
    if (param_2 == 1) {
      pvVar2 = GlobalAlloc(0x40,0x1c);
      pvVar3 = GlobalLock(pvVar2);
      if ((pvVar3 != (LPVOID)0x0) &&
         (puVar4 = (undefined4 *)FUN_011ba7a0(param_1[4],iVar1), puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(puVar4,&DAT_011d9d00,&param_2);
        iVar8 = 1;
        *param_3 = param_2;
        uVar9 = 0;
        param_1[2] = param_1[2] + 1;
        goto LAB_011a6094;
      }
    }
    else {
      pvVar2 = GlobalAlloc(0x40,0x1c);
      pvVar3 = GlobalLock(pvVar2);
      if ((pvVar3 != (LPVOID)0x0) &&
         (puVar4 = (undefined4 *)FUN_011ba7a0(param_1[4],iVar1), puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(puVar4,&DAT_011d9d00,&param_2);
        iVar8 = 1;
        *param_3 = param_2;
        param_1[2] = param_1[2] + 1;
        piVar7 = param_3;
        while( true ) {
          uVar9 = 0;
          piVar7 = piVar7 + 1;
          iVar5 = (**(code **)(*param_1 + 0xc))(param_1,1,piVar7,0);
          if (iVar5 != 0) break;
          iVar8 = iVar8 + 1;
        }
        goto LAB_011a6094;
      }
    }
  }
  else {
    if (*piVar7 <= param_1[3]) {
      param_1[2] = iVar5 + 1;
      param_1[3] = 0;
      uVar9 = (**(code **)(*param_1 + 0xc))(param_1,param_2,param_3,param_4);
      goto LAB_011a6094;
    }
    piVar6 = param_3;
    if (param_2 != 1) {
      while (iVar5 = (**(code **)(*param_1 + 0xc))(param_1,1,piVar6,0), iVar5 == 0) {
        uVar9 = 0;
        iVar8 = iVar8 + 1;
        piVar6 = piVar6 + 1;
      }
      goto LAB_011a6094;
    }
    uVar9 = *(undefined4 *)(piVar7[2] + param_1[3] * 4);
    pvVar2 = GlobalAlloc(0x40,0x1c);
    pvVar3 = GlobalLock(pvVar2);
    if ((pvVar3 != (LPVOID)0x0) &&
       (puVar4 = (undefined4 *)FUN_011ba7e0(param_1[4],uVar9), puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(puVar4,&DAT_011d9d00,&param_2);
      iVar8 = 1;
      *param_3 = param_2;
      uVar9 = 0;
      param_1[3] = param_1[3] + 1;
      goto LAB_011a6094;
    }
  }
  uVar9 = 0x8007000e;
LAB_011a6094:
  if (param_4 != (int *)0x0) {
    *param_4 = iVar8;
  }
  return uVar9;
}


