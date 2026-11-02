/* Module: vegas30.exe
   Function: FUN_0043a6b0
   Address: 0043a6b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0043a6b0(HWND param_1,int *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 local_6cc [435];
  
  for (iVar1 = SendMessageA(param_1,0x418,0,0); iVar1 != 0; iVar1 = iVar1 + -1) {
    SendMessageA(param_1,0x416,0,0);
  }
  uVar6 = 0;
  puVar4 = local_6cc;
  while( true ) {
    uVar2 = param_3;
    if (0x56 < param_3) {
      uVar2 = 0x57;
    }
    if (uVar2 <= uVar6) break;
    iVar1 = *param_2;
    uVar6 = uVar6 + 1;
    param_2 = param_2 + 2;
    puVar5 = puVar4 + 5;
    puVar7 = (undefined4 *)(&DAT_00610ff8 + iVar1 * 0x14);
    puVar8 = puVar4;
    for (iVar3 = 5; puVar4 = puVar5, iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
  }
  SendMessageA(param_1,0x414,param_3,(LPARAM)local_6cc);
  return;
}


