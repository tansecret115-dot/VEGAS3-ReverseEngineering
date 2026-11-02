/* Module: vegas30.exe
   Function: FUN_00455bd0
   Address: 00455bd0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00455bd0(int param_1,HDC param_2,undefined4 param_3)

{
  int x;
  HGDIOBJ h;
  
  if (*(HGDIOBJ *)(param_1 + 8) == (HGDIOBJ)0x0) {
    h = (HGDIOBJ)_SfGetUIFont_4(100);
  }
  else {
    h = SelectObject(param_2,*(HGDIOBJ *)(param_1 + 8));
  }
  if ((*(uint *)(param_1 + 0x18) & 0x200) == 0) {
    (**(code **)(*(int *)(param_1 + 0xab8) + 0x10))(param_1,param_1 + 0xab8,param_2,param_3);
  }
  if ((((*(byte *)(param_1 + 0x18) & 2) != 0) &&
      (x = *(int *)(param_1 + 0xb28), *(int *)(param_1 + 0xac0) <= x)) &&
     (x < *(int *)(param_1 + 0xac8))) {
    PatBlt(param_2,x,*(int *)(param_1 + 0xac4),1,*(int *)(param_1 + 0xad4),0x550009);
  }
  if (h != (HGDIOBJ)0x0) {
    SelectObject(param_2,h);
  }
  return;
}


