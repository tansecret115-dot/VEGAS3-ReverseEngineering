/* Module: vegas30.exe
   Function: FUN_00449040
   Address: 00449040
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00449040(HDC param_1,int *param_2)

{
  ushort uVar1;
  HPALETTE hPal;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  HPALETTE unaff_EBP;
  int *piVar6;
  undefined4 in_stack_0000001c;
  int *in_stack_00000020;
  
  piVar6 = in_stack_00000020;
  switch(in_stack_0000001c) {
  case 0:
    piVar6 = *(int **)(&DAT_0064b47c + ((in_stack_00000020 != (int *)0x0) + 2) * 4);
    break;
  case 1:
    piVar6 = *(int **)(&DAT_0064b47c + (uint)(in_stack_00000020 != (int *)0x0) * 4);
    break;
  case 2:
    piVar6 = *(int **)(&DAT_0064b47c + ((in_stack_00000020 != (int *)0x0) + 4) * 4);
    break;
  case 3:
    piVar6 = *(int **)(&DAT_0064b47c + ((in_stack_00000020 != (int *)0x0) + 6) * 4);
    break;
  case 4:
    piVar6 = *(int **)(&DAT_0064b47c + ((in_stack_00000020 != (int *)0x0) + 8) * 4);
  }
  hPal = (HPALETTE)FUN_004019f0();
  SelectPalette(param_1,hPal,0);
  RealizePalette(param_1);
  iVar5 = piVar6[1];
  iVar2 = ftol();
  iVar3 = ftol();
  iVar4 = iVar3;
  if ((iVar3 - iVar2 < 1) && (iVar4 = iVar3 + 1, iVar5 < iVar3 + 1)) {
    iVar2 = iVar2 + -1;
    iVar4 = iVar3;
  }
  if (piVar6[4] == 0) {
    if (((piVar6[8] != 0) || (uVar1 = *(ushort *)((int)piVar6 + 0xe), uVar1 == 0)) || (8 < uVar1))
    goto LAB_00449156;
    iVar5 = 1 << ((byte)uVar1 & 0x1f);
  }
  else {
    if (piVar6[4] == 3) {
      in_stack_00000020 = piVar6 + 0xd;
      goto LAB_00449164;
    }
LAB_00449156:
    iVar5 = piVar6[8];
  }
  in_stack_00000020 = (int *)(*piVar6 + iVar5 * 4 + (int)piVar6);
LAB_00449164:
  DrawDibDraw(DAT_0064b4a4,param_1,*param_2,param_2[1],param_2[2] - *param_2,param_2[3] - param_2[1]
              ,piVar6,in_stack_00000020,iVar2,0,iVar4 - iVar2,piVar6[2],0);
  SelectPalette(param_1,unaff_EBP,0);
  return;
}


