/* Module: vegas30.exe
   Function: FUN_00422aa0
   Address: 00422aa0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00422aa0(uint param_1,LPSTR param_2)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *unaff_EBX;
  int *unaff_EBP;
  int *unaff_EDI;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  undefined1 *puVar8;
  int *piVar9;
  int *piStack_124;
  ISFGraphBuilder *local_11c [63];
  uint uStack_20;
  
  lVar1 = Mixer_GetDeviceGraph(local_11c,4,param_1);
  if (-1 < lVar1) {
    iVar2 = (**(code **)(*(int *)local_11c[0] + 0xb8))();
    if ((-1 < iVar2) && (unaff_EDI != (int *)0x0)) {
      uVar3 = lstrlenA(":  ");
      uVar5 = param_1;
      if (uVar3 + 1 < param_1) {
        lstrcpynA(param_2,":  ",uVar3 + 1);
        param_2[uVar3] = '\0';
        param_2 = param_2 + uVar3;
        uVar5 = uVar3;
      }
      puVar8 = &stack0xfffffed0;
      piVar9 = (int *)0x0;
      piVar7 = (int *)0x1;
      iVar2 = (**(code **)(*unaff_EDI + 0xc))(unaff_EDI);
      while (iVar2 == 0) {
        piVar6 = (int *)&stack0xfffffec4;
        (**(code **)(*unaff_EBX + 0x10))(unaff_EBX,&DAT_006336f8);
        (**(code **)(*piVar9 + 0xc))(piVar9,&stack0xfffffec8);
        unaff_EBP = (int *)FUN_00508b40(&stack0xfffffed0,&stack0xfffffec0,0x104);
        if (puVar8 == (undefined1 *)0x0) {
          iVar2 = lstrlenA(", ");
          uVar3 = param_1;
          if (uVar5 + 1 + iVar2 < param_1) {
            lstrcpynA(param_2,", ",iVar2 + 1);
            param_2[iVar2] = '\0';
            param_2 = param_2 + iVar2;
            uVar5 = uVar5 + iVar2;
            param_1 = uStack_20;
            goto LAB_00422bd8;
          }
        }
        else {
          puVar8 = (undefined1 *)0x0;
LAB_00422bd8:
          uVar3 = uVar5;
          if (uVar5 < param_1) {
            if (unaff_EBP == (int *)0x0) {
              _SfLoadString_16(DAT_00647204,0x50be,param_2,param_1 - uVar5);
            }
            else {
              FUN_0050ab70(&stack0xfffffed0,param_2,param_1 - uVar5);
            }
            iVar2 = lstrlenA(param_2);
            iVar4 = lstrlenA(param_2);
            param_2 = param_2 + iVar4;
            uVar3 = uVar5 + iVar2;
          }
        }
        (**(code **)(*piVar7 + 8))(piVar7);
        (**(code **)(*piVar6 + 8))(piVar6);
        if (param_1 <= uVar3) break;
        iVar2 = (**(code **)(*unaff_EBP + 0xc))(unaff_EBP,1,&stack0xfffffec0,0);
        uVar5 = uVar3;
      }
      (**(code **)(*unaff_EBP + 8))(unaff_EBP);
    }
    (**(code **)(*piStack_124 + 8))();
  }
  return;
}


