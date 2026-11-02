/* Module: vegas30k.dll
   Function: FUN_01134340
   Address: 01134340
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01134340(int param_1,int param_2,LPCSTR param_3,uint *param_4)

{
  HWND hWnd;
  LRESULT LVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  int *piVar6;
  uint *puVar7;
  int local_228 [5];
  undefined1 *local_214;
  LPCSTR local_210;
  undefined1 local_208;
  uint auStack_207 [129];
  
  hWnd = *(HWND *)(param_1 + 0x18);
  LVar1 = SendMessageA(hWnd,0x110a,9,0);
  piVar6 = local_228;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar6 = 0;
    piVar6 = piVar6 + 1;
  }
  local_228[2] = FUN_0112eb70(hWnd,LVar1);
  puVar5 = *(uint **)(*(int *)(local_228[2] + 8) + param_2 * 4);
  if ((*puVar5 & 0x10000) == 0) {
    *param_4 = puVar5[3];
    iVar2 = FUN_0112fff0(hWnd,LVar1,&local_208);
    (&local_208)[iVar2] = 0x5c;
    uVar4 = puVar5[4];
    puVar5 = puVar5 + 5;
    puVar7 = (uint *)((int)auStack_207 + iVar2);
    for (uVar3 = (uint)(ushort)((ushort)uVar4 >> 2); uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar7 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar7 = puVar7 + 1;
    }
    local_214 = &local_208;
    piVar6 = *(int **)(param_1 + 0x3c);
    for (uVar4 = (ushort)uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(char *)puVar7 = (char)*puVar5;
      puVar5 = (uint *)((int)puVar5 + 1);
      puVar7 = (uint *)((int)puVar7 + 1);
    }
    local_228[0] = 2;
    local_228[3] = param_2;
    local_210 = param_3;
    (**(code **)(*piVar6 + 0xc))(piVar6,local_228);
    lstrlenA(param_3);
    return;
  }
  *param_3 = '\0';
  *param_4 = 0;
  lstrlenA(param_3);
  return;
}


