/* Module: vegas30.exe
   Function: FUN_00451f10
   Address: 00451f10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00451f10(undefined4 param_1,int *param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  
  piVar1 = (int *)*param_3;
  if (piVar1 == (int *)0x0) {
    param_3 = (int *)0x0;
  }
  else {
    iVar2 = piVar1[8];
    if ((iVar2 == 0) && (*(ushort *)((int)piVar1 + 0xe) < 9)) {
      iVar2 = 1 << ((byte)*(ushort *)((int)piVar1 + 0xe) & 0x1f);
    }
    param_3 = (int *)(*piVar1 + iVar2 * 4 + (int)piVar1);
  }
  iVar2 = param_4[1];
  iVar7 = (param_4[3] - iVar2) / 2;
  iVar3 = *param_4;
  piVar9 = piVar1;
  DrawDibDraw(DAT_0064b13c,param_1,*param_2,param_2[1],iVar7,iVar7,piVar1,param_3,iVar3,iVar2,iVar7,
              iVar7,0);
  iVar5 = param_4[2] - iVar7;
  piVar8 = piVar1;
  DrawDibDraw(DAT_0064b13c,piVar9,(*param_2 - iVar7) + iVar2,param_2[1],iVar7,iVar7,piVar1,iVar3,
              iVar5,param_4[1],iVar7,iVar7,0);
  iVar2 = *param_4;
  iVar6 = param_4[3] - iVar7;
  piVar9 = piVar1;
  DrawDibDraw(DAT_0064b13c,piVar8,*param_2,(param_2[1] - iVar7) + iVar3,iVar7,iVar7,piVar1,iVar5,
              iVar2,iVar6,iVar7,iVar7,0);
  iVar3 = param_4[3] - iVar7;
  iVar4 = param_4[2] - iVar7;
  piVar8 = piVar1;
  DrawDibDraw(DAT_0064b13c,piVar9,(*param_2 - iVar7) + iVar6,(param_2[1] - iVar7) + iVar5,iVar7,
              iVar7,piVar1,iVar2,iVar4,iVar3,iVar7,iVar7,0);
  iVar3 = iVar3 + iVar7 * -2;
  iVar2 = param_4[1];
  iVar5 = *param_4 + iVar7;
  piVar9 = piVar1;
  DrawDibDraw(DAT_0064b13c,piVar8,*param_2 + iVar7,param_2[1],iVar3,iVar7,piVar1,iVar4,iVar5,iVar2,
              (param_4[2] + iVar7 * -2) - *param_4,iVar7,0);
  iVar4 = *param_4 + iVar7;
  piVar8 = piVar1;
  DrawDibDraw(DAT_0064b13c,piVar9,*param_2 + iVar7,param_2[3] - iVar7,iVar2,iVar7,piVar1,iVar5,iVar4
              ,param_4[3] - iVar7,(param_4[2] - iVar3) - *param_4,iVar7,0);
  iVar3 = *param_4;
  piVar9 = piVar1;
  DrawDibDraw(DAT_0064b13c,piVar8,*param_2,param_2[1] + iVar7,iVar7,iVar5 - iVar2,piVar1,iVar4,iVar3
              ,param_4[1] + iVar7,iVar7,1,0);
  iVar5 = param_4[1] + iVar7;
  iVar6 = param_4[2] - iVar7;
  iVar2 = iVar7;
  piVar8 = piVar1;
  DrawDibDraw(DAT_0064b13c,piVar9,param_2[2] - iVar7,param_2[1] + iVar7,iVar7,iVar4,piVar1,iVar3,
              iVar6,iVar5,iVar7,1,0);
  DrawDibDraw(DAT_0064b13c,piVar8,*param_2 + iVar7,param_2[1] + iVar7,iVar5,iVar3,piVar1,iVar6,
              *param_4 + iVar7,param_4[1] + iVar7,(param_4[2] - iVar2) - *param_4,1,0);
  return 0;
}


