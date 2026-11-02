/* Module: ednt3260.dll
   Function: FUN_630f92e0
   Address: 630f92e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_630f92e0(int param_1)

{
  undefined2 *puVar1;
  int iVar2;
  short *psVar3;
  short *psVar4;
  int local_20;
  short *local_1c;
  int local_18;
  short *local_14;
  int local_10;
  int local_8;
  
  local_20 = 0;
  if (0 < *(short *)(param_1 + 0x6344)) {
    local_1c = (short *)(param_1 + 0xf248);
    local_14 = (short *)(param_1 + 0xf02c);
    local_18 = param_1 + 0xf8c4;
    do {
      puVar1 = (undefined2 *)(param_1 + 0x1413c);
      local_8 = 0;
      local_10 = local_18;
      psVar3 = local_14;
      psVar4 = local_1c;
      do {
        if ((local_8 == 0) || ((puVar1[-0x2948] != 0 && (psVar3[-0xb4] != 0)))) {
          *puVar1 = 1;
          FUN_630f94b0(*psVar3,(int)(psVar4 + -0xf0),psVar4,(int)(psVar4 + 0xf0),0,
                       (undefined4 *)(param_1 + 0xf608));
        }
        FUN_630f9550(local_10,param_1 + 0xf608,0,psVar3[0x2864]);
        local_8 = local_8 + 1;
        puVar1 = puVar1 + 1;
        psVar3 = psVar3 + 5;
        psVar4 = psVar4 + 0x28;
        local_10 = local_10 + 500;
      } while (local_8 < 6);
      local_14 = local_14 + 1;
      local_20 = local_20 + 1;
      local_18 = local_18 + 100;
      local_1c = local_1c + 8;
    } while (local_20 < *(short *)(param_1 + 0x6344));
  }
  iVar2 = param_1 + 0xf66c;
  local_8 = 0;
  psVar3 = (short *)(param_1 + 0xef6c);
  psVar4 = (short *)(param_1 + 0xeeac);
  do {
    if (psVar4[-0x4558] != 0) {
      if ((local_8 == 0) || ((*psVar4 != 0 && (psVar4[6] != 0)))) {
        psVar4[0x2948] = 1;
        FUN_630f94b0(psVar4[0x2a],(int)(psVar3 + -0x30),psVar3,(int)(psVar3 + 0x30),psVar4[0x2918],
                     (undefined4 *)(param_1 + 0xf608));
      }
      FUN_630f9550(iVar2,param_1 + 0xf608,psVar4[0x2918],psVar4[0x291e]);
    }
    local_8 = local_8 + 1;
    psVar4 = psVar4 + 1;
    psVar3 = psVar3 + 8;
    iVar2 = iVar2 + 100;
  } while (local_8 < 6);
  return;
}


