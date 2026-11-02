/* Module: vegas30.exe
   Function: FUN_004d98c0
   Address: 004d98c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_004d98c0(int param_1,HMENU param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0x25c);
  SetMenuDefaultItem(param_2,0,1);
  if (iVar1 == 0) {
    EnableMenuItem(param_2,0xa0bf,1);
    EnableMenuItem(param_2,0xa0c0,1);
    EnableMenuItem(param_2,0xa0c1,1);
    EnableMenuItem(param_2,0xa0c2,1);
    EnableMenuItem(param_2,0xa0c3,1);
    EnableMenuItem(param_2,0xa0c4,1);
    return;
  }
  uVar2 = *(uint *)(iVar1 + 0x10);
  CheckMenuItem(param_2,0xa0c2,(uVar2 & 1) << 3);
  CheckMenuItem(param_2,0xa0c1,(uVar2 & 2) << 2);
  CheckMenuItem(param_2,0xa0c3,(uVar2 & 4) << 1);
  CheckMenuItem(param_2,0xa0c4,uVar2 & 8);
  return;
}


