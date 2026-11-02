/* Module: vegas30.exe
   Function: FUN_00451c50
   Address: 00451c50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00451c50(undefined4 param_1,int *param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  undefined4 uVar14;
  
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
  iVar2 = *param_4;
  iVar10 = (param_4[2] - iVar2) / 2;
  iVar9 = param_2[3] - param_2[1];
  iVar11 = iVar10;
  iVar7 = iVar10;
  iVar4 = iVar10;
  DrawDibDraw(DAT_0064b13c,param_1,*param_2,param_2[1],iVar10,iVar10,piVar1,param_3,iVar2,param_4[1]
              ,iVar10,iVar10,0);
  iVar3 = param_4[2] - iVar10;
  iVar13 = iVar10;
  iVar5 = iVar10;
  DrawDibDraw(DAT_0064b13c,iVar2,(*param_2 - iVar10) + iVar4,param_2[1],iVar10,iVar10,iVar11,iVar7,
              iVar3,param_4[1],iVar10,iVar10,0);
  iVar2 = *param_4;
  iVar11 = iVar10;
  iVar7 = iVar10;
  iVar4 = iVar10;
  DrawDibDraw(DAT_0064b13c,iVar3,*param_2,(iVar9 - iVar10) + param_2[1],iVar10,iVar10,iVar13,iVar5,
              iVar2,param_4[3] - iVar10,iVar10,iVar10,0);
  iVar3 = param_4[2] - iVar10;
  iVar13 = iVar10;
  iVar5 = iVar10;
  DrawDibDraw(DAT_0064b13c,iVar2,(*param_2 - iVar10) + iVar4,(iVar9 - iVar10) + param_2[1],iVar10,
              iVar10,iVar11,iVar7,iVar3,param_4[3] - iVar10,iVar10,iVar10,0);
  iVar6 = iVar9 + iVar10 * -2;
  iVar8 = (iVar10 * -2 - param_4[1]) + param_4[3];
  iVar4 = param_4[1] + iVar10;
  iVar2 = *param_4;
  iVar11 = iVar10;
  iVar7 = iVar10;
  DrawDibDraw(DAT_0064b13c,iVar3,*param_2,iVar10 + param_2[1],iVar10,iVar6,iVar13,iVar5,iVar2,iVar4,
              iVar10,iVar8,0);
  iVar3 = (iVar4 - param_4[1]) + param_4[3];
  iVar4 = param_4[2] - iVar10;
  iVar13 = iVar10;
  iVar5 = iVar10;
  DrawDibDraw(DAT_0064b13c,iVar2,(*param_2 - iVar10) + iVar8,iVar10 + param_2[1],iVar10,iVar6,iVar11
              ,iVar7,iVar4,param_4[1] + iVar10,iVar10,iVar3,0);
  iVar3 = iVar3 - iVar11;
  uVar14 = 1;
  iVar7 = *param_4 + iVar10;
  iVar11 = iVar10;
  DrawDibDraw(DAT_0064b13c,iVar4,*param_2 + iVar10,param_2[1],iVar3,iVar10,iVar13,iVar5,iVar7,
              param_4[1],1,iVar10,0);
  iVar5 = param_4[3] - iVar10;
  uVar12 = 1;
  iVar2 = iVar10;
  iVar13 = iVar10;
  DrawDibDraw(DAT_0064b13c,iVar7,*param_2 + iVar10,(iVar9 - iVar10) + param_2[1],iVar11,iVar10,iVar3
              ,uVar14,*param_4 + iVar10,iVar5,1,iVar10,0);
  DrawDibDraw(DAT_0064b13c,iVar7,*param_2 + iVar10,iVar10 + param_2[1],iVar13,iVar2,iVar11,uVar12,
              *param_4 + iVar10,param_4[1] + iVar10,1,(iVar5 - param_4[1]) + param_4[3],0);
  return 0;
}


