/* Module: vidcap30.exe
   Function: FUN_0050aa00
   Address: 0050aa00
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0050aa00(byte *param_1,HDC param_2)

{
  HGDIOBJ pvVar1;
  int c;
  undefined4 uVar2;
  tagSIZE *psizl;
  tagSIZE local_28;
  CHAR local_20 [32];
  
  pvVar1 = (HGDIOBJ)_SfGetUIFont_4(0x6e);
  pvVar1 = SelectObject(param_2,pvVar1);
  if (*(int *)(param_1 + 0x80) < 0x8001) {
    uVar2 = 0x5a;
  }
  else {
    uVar2 = 0x8a;
  }
  SfPrintF(local_20,&DAT_00594bbc,uVar2);
  psizl = &local_28;
  c = lstrlenA(local_20);
  GetTextExtentPoint32A(param_2,local_20,c,psizl);
  if ((param_1[4] & 1) != 0) {
    if ((*(int *)(param_1 + 0xa8) != 1) && ((*param_1 & 0x20) != 0)) {
      SelectObject(param_2,pvVar1);
      return local_28.cx + 9;
    }
    SelectObject(param_2,pvVar1);
    return local_28.cx + 7;
  }
  if ((*(int *)(param_1 + 0xa8) != 1) && ((*param_1 & 0x20) != 0)) {
    SelectObject(param_2,pvVar1);
    return local_28.cy + 9;
  }
  SelectObject(param_2,pvVar1);
  return local_28.cy + 7;
}


