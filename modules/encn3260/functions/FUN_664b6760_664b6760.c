/* Module: encn3260.dll
   Function: FUN_664b6760
   Address: 664b6760
   Source: Ghidra pseudocode (Stage 10 batch) */


BOOL __cdecl FUN_664b6760(int param_1,int param_2,int param_3,int *param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int wDest;
  int hDest;
  HGDIOBJ h;
  HGDIOBJ h_00;
  BOOL BVar5;
  
  wDest = param_5[2] - *param_5;
  iVar1 = *param_4;
  hDest = param_5[3] - param_5[1];
  iVar2 = param_4[1];
  iVar3 = param_4[2];
  iVar4 = param_4[3];
  h = SelectObject(*(HDC *)(param_1 + 0x864),*(HGDIOBJ *)(param_2 + 0x54));
  h_00 = SelectObject(*(HDC *)(param_1 + 0x868),*(HGDIOBJ *)(param_3 + 0x54));
  if (*(int *)(param_3 + 0x60) != 0) {
    BVar5 = FUN_664b6880();
    return BVar5;
  }
  if ((wDest == iVar3 - iVar1) && (hDest == iVar4 - iVar2)) {
    BVar5 = BitBlt(*(HDC *)(param_1 + 0x864),*param_5,param_5[1],wDest,hDest,
                   *(HDC *)(param_1 + 0x868),*param_4,param_4[1],0xcc0020);
  }
  else {
    BVar5 = StretchBlt(*(HDC *)(param_1 + 0x864),*param_5,param_5[1],wDest,hDest,
                       *(HDC *)(param_1 + 0x868),*param_4,param_4[1],iVar3 - iVar1,iVar4 - iVar2,
                       0xcc0020);
  }
  SelectObject(*(HDC *)(param_1 + 0x864),h);
  SelectObject(*(HDC *)(param_1 + 0x868),h_00);
  return BVar5;
}


