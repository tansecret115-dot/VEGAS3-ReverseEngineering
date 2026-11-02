/* Module: mp3plug.dll
   Function: FUN_5f688990
   Address: 5f688990
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5f688990(int param_1,int param_2,int *param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = *param_3;
  iVar6 = iVar5 >> 3;
  uVar1 = *(undefined1 *)(iVar6 + param_1);
  uVar2 = *(undefined1 *)(iVar6 + 2 + param_1);
  uVar3 = *(undefined1 *)(iVar6 + 1 + param_1);
  uVar4 = *(undefined1 *)(iVar6 + 3 + param_1);
  *param_3 = iVar5 + param_2;
  return (uint)(CONCAT31(CONCAT21(CONCAT11(uVar1,uVar3),uVar2),uVar4) << ((byte)iVar5 & 7)) >>
         (0x20U - (char)param_2 & 0x1f);
}


