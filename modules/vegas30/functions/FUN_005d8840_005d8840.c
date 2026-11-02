/* Module: vegas30.exe
   Function: FUN_005d8840
   Address: 005d8840
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005d8840(HWND param_1,int param_2)

{
  int iVar1;
  int iVar2;
  HWND pHVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  undefined4 local_12c [6];
  undefined4 local_114;
  undefined4 local_110;
  undefined1 local_104 [260];
  
  iVar1 = *(int *)(param_2 + 0xd20);
  iVar2 = *(int *)(param_2 + 0xd24);
  puVar5 = (undefined4 *)(param_2 + 0xd08);
  puVar6 = local_12c;
  for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  local_114 = 0;
  local_110 = 0;
  _SfNanoTimeToText_20(local_104,local_12c,-iVar1,-(iVar2 + (uint)(iVar1 != 0)),0);
  puVar7 = local_104;
  pHVar3 = GetDlgItem(param_1,0x47a);
  SfSetWindowText(pHVar3,puVar7);
  return;
}


