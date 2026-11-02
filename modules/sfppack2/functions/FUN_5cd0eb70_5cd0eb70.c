/* Module: sfppack2.dll
   Function: FUN_5cd0eb70
   Address: 5cd0eb70
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5cd0eb70(byte *param_1,HDC param_2)

{
  HFONT h;
  HGDIOBJ h_00;
  int c;
  tagSIZE *psizl;
  tagSIZE local_28;
  uchar local_20 [32];
  
  h = FUN_5cd2ba40(0x6e);
  h_00 = SelectObject(param_2,h);
  FUN_5cd20ca0(local_20,"%d");
  psizl = &local_28;
  c = lstrlenA((LPCSTR)local_20);
  GetTextExtentPoint32A(param_2,(LPCSTR)local_20,c,psizl);
  if ((param_1[4] & 1) == 0) {
    if ((*(int *)(param_1 + 0xa8) != 1) && ((*param_1 & 0x20) != 0)) {
      SelectObject(param_2,h_00);
      return local_28.cy + 9;
    }
    SelectObject(param_2,h_00);
    return local_28.cy + 7;
  }
  if ((*(int *)(param_1 + 0xa8) != 1) && ((*param_1 & 0x20) != 0)) {
    SelectObject(param_2,h_00);
    return local_28.cx + 9;
  }
  SelectObject(param_2,h_00);
  return local_28.cx + 7;
}


