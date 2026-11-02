/* Module: vegas30k.dll
   Function: FUN_0112fff0
   Address: 0112fff0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0112fff0(HWND param_1,int param_2,undefined4 *param_3)

{
  int lParam;
  int iVar1;
  LRESULT LVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  size_t _Size;
  undefined4 *puVar6;
  LRESULT LVar7;
  undefined4 local_104 [65];
  
  if (param_2 == -0x10000) {
    *(undefined1 *)param_3 = 0;
    return 0;
  }
  lParam = SendMessageA(param_1,0x110a,3,param_2);
  if (lParam == 0) {
    iVar1 = FUN_0112fc40(param_1,param_2,0xffff0000,param_3);
  }
  else {
    iVar1 = FUN_0112fc40(param_1,param_2,lParam,param_3);
  }
  _Size = iVar1 + 1;
  if (-1 < (int)_Size) {
    while( true ) {
      if (lParam == 0) {
        return _Size - 1;
      }
      LVar2 = SendMessageA(param_1,0x110a,3,lParam);
      LVar7 = LVar2;
      if (LVar2 == 0) {
        LVar7 = -0x10000;
      }
      uVar3 = FUN_0112fc40(param_1,lParam,LVar7,local_104);
      if ((int)_Size < 0) break;
      memmove((undefined1 *)((int)param_3 + uVar3 + 1),param_3,_Size);
      puVar5 = local_104;
      puVar6 = param_3;
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
      *(undefined1 *)((int)param_3 + uVar3) = 0x5c;
      _Size = _Size + 1 + uVar3;
      lParam = LVar2;
    }
  }
  *(undefined1 *)param_3 = 0;
  return 0;
}


