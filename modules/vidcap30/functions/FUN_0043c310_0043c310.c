/* Module: vidcap30.exe
   Function: FUN_0043c310
   Address: 0043c310
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0043c310(int param_1,HDC param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  DWORD DVar4;
  DWORD DVar5;
  COLORREF color;
  byte bVar6;
  byte bVar7;
  undefined4 local_8;
  
  DVar4 = GetSysColor(0xf);
  DVar5 = GetSysColor(0xc);
  bVar7 = (byte)(DVar4 >> 8);
  bVar6 = (byte)(DVar4 >> 0x10);
  local_8 = (uint)bVar6;
  iVar1 = ((DVar5 >> 0x10 & 0xff) - local_8) * 0x7f;
  iVar2 = ((DVar5 >> 8 & 0xff) - (uint)bVar7) * 0x7f;
  iVar3 = ((DVar5 & 0xff) - (DVar4 & 0xff)) * 0x7f;
  color = SetBkColor(param_2,(uint)CONCAT21(CONCAT11((char)(iVar1 + (iVar1 >> 0x1f & 0xffU) >> 8) +
                                                     bVar6,(char)(iVar2 + (iVar2 >> 0x1f & 0xffU) >>
                                                                 8) + bVar7),
                                            (char)(iVar3 + (iVar3 >> 0x1f & 0xffU) >> 8) +
                                            (char)DVar4));
  ExtTextOutA(param_2,0,0,2,(RECT *)(param_1 + 0xa0),(LPCSTR)0x0,0,(INT *)0x0);
  FUN_00412310(param_2,(RECT *)(param_1 + 0xa0),10,8);
  SetBkColor(param_2,color);
  FUN_00453960(*(undefined4 *)(param_1 + 0x13bc),0xf,0,param_2);
  return;
}


