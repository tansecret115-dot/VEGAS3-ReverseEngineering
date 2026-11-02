/* Module: erv23260.dll
   Function: FUN_63811870
   Address: 63811870
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_63811870(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  *(undefined4 *)(param_1 + 0x140) = 0;
  uVar3 = 6;
  puVar2 = (undefined4 *)(param_1 + 0x244);
  do {
    uVar1 = ftol();
    puVar2[-0x40] = uVar1;
    uVar1 = ftol();
    *puVar2 = uVar1;
    uVar3 = uVar3 + 6;
    puVar2 = puVar2 + 1;
  } while (uVar3 < 0xbb);
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  *(undefined4 *)(param_1 + 0x1c4) = *(undefined4 *)(param_1 + 0x144);
  *(undefined4 *)(param_1 + 0x1c8) = *(undefined4 *)(param_1 + 0x148);
  *(undefined4 *)(param_1 + 0x1cc) = *(undefined4 *)(param_1 + 0x14c);
  *(undefined4 *)(param_1 + 0x1d0) = *(undefined4 *)(param_1 + 0x150);
  *(undefined4 *)(param_1 + 0x1d4) = *(undefined4 *)(param_1 + 0x154);
  *(undefined4 *)(param_1 + 0x1d8) = *(undefined4 *)(param_1 + 0x158);
  *(undefined4 *)(param_1 + 0x1dc) = *(undefined4 *)(param_1 + 0x158);
  *(undefined4 *)(param_1 + 0x1e0) = *(undefined4 *)(param_1 + 0x15c);
  *(undefined4 *)(param_1 + 0x1e4) = *(undefined4 *)(param_1 + 0x160);
  *(undefined4 *)(param_1 + 0x1e8) = *(undefined4 *)(param_1 + 0x164);
  *(undefined4 *)(param_1 + 0x1ec) = *(undefined4 *)(param_1 + 0x164);
  *(undefined4 *)(param_1 + 0x1f0) = *(undefined4 *)(param_1 + 0x168);
  *(undefined4 *)(param_1 + 500) = *(undefined4 *)(param_1 + 0x168);
  *(undefined4 *)(param_1 + 0x1f8) = *(undefined4 *)(param_1 + 0x16c);
  *(undefined4 *)(param_1 + 0x1fc) = *(undefined4 *)(param_1 + 0x16c);
  *(undefined4 *)(param_1 + 0x200) = *(undefined4 *)(param_1 + 0x170);
  *(undefined4 *)(param_1 + 0x204) = *(undefined4 *)(param_1 + 0x170);
  *(undefined4 *)(param_1 + 0x208) = *(undefined4 *)(param_1 + 0x170);
  *(undefined4 *)(param_1 + 0x20c) = *(undefined4 *)(param_1 + 0x174);
  *(undefined4 *)(param_1 + 0x210) = *(undefined4 *)(param_1 + 0x174);
  *(undefined4 *)(param_1 + 0x214) = *(undefined4 *)(param_1 + 0x174);
  *(undefined4 *)(param_1 + 0x218) = *(undefined4 *)(param_1 + 0x178);
  *(undefined4 *)(param_1 + 0x21c) = *(undefined4 *)(param_1 + 0x178);
  *(undefined4 *)(param_1 + 0x220) = *(undefined4 *)(param_1 + 0x178);
  *(undefined4 *)(param_1 + 0x224) = *(undefined4 *)(param_1 + 0x178);
  *(undefined4 *)(param_1 + 0x228) = *(undefined4 *)(param_1 + 0x178);
  *(undefined4 *)(param_1 + 0x22c) = *(undefined4 *)(param_1 + 0x17c);
  *(undefined4 *)(param_1 + 0x230) = *(undefined4 *)(param_1 + 0x17c);
  *(undefined4 *)(param_1 + 0x234) = *(undefined4 *)(param_1 + 0x17c);
  *(undefined4 *)(param_1 + 0x238) = *(undefined4 *)(param_1 + 0x17c);
  *(undefined4 *)(param_1 + 0x23c) = *(undefined4 *)(param_1 + 0x17c);
  *(undefined4 *)(param_1 + 0x2c0) = 0;
  *(undefined4 *)(param_1 + 0x2c8) = *(undefined4 *)(param_1 + 0x14c);
  *(undefined4 *)(param_1 + 0x2c4) = *(undefined4 *)(param_1 + 0x144);
  *(undefined4 *)(param_1 + 0x2d0) = *(undefined4 *)(param_1 + 0x158);
  *(undefined4 *)(param_1 + 0x2d4) = *(undefined4 *)(param_1 + 0x158);
  *(undefined4 *)(param_1 + 0x2dc) = *(undefined4 *)(param_1 + 0x164);
  *(undefined4 *)(param_1 + 0x2cc) = *(undefined4 *)(param_1 + 0x150);
  *(undefined4 *)(param_1 + 0x2d8) = *(undefined4 *)(param_1 + 0x160);
  *(undefined4 *)(param_1 + 0x2e0) = *(undefined4 *)(param_1 + 0x168);
  *(undefined4 *)(param_1 + 0x2e4) = *(undefined4 *)(param_1 + 0x168);
  *(undefined4 *)(param_1 + 0x2ec) = *(undefined4 *)(param_1 + 0x170);
  *(undefined4 *)(param_1 + 0x2f0) = *(undefined4 *)(param_1 + 0x170);
  *(undefined4 *)(param_1 + 0x2e8) = *(undefined4 *)(param_1 + 0x16c);
  *(undefined4 *)(param_1 + 0x2f4) = *(undefined4 *)(param_1 + 0x174);
  *(undefined4 *)(param_1 + 0x2f8) = *(undefined4 *)(param_1 + 0x174);
  uVar1 = *(undefined4 *)(param_1 + 0x178);
  *(undefined4 *)(param_1 + 0x2fc) = uVar1;
  *(undefined4 *)(param_1 + 0x300) = uVar1;
  *(undefined4 *)(param_1 + 0x304) = uVar1;
  uVar1 = *(undefined4 *)(param_1 + 0x17c);
  *(undefined4 *)(param_1 + 0x308) = uVar1;
  *(undefined4 *)(param_1 + 0x30c) = uVar1;
  *(undefined4 *)(param_1 + 0x310) = uVar1;
  *(undefined4 *)(param_1 + 0x314) = uVar1;
  *(undefined4 *)(param_1 + 0x318) = uVar1;
  *(undefined4 *)(param_1 + 0x31c) = uVar1;
  *(undefined4 *)(param_1 + 800) = uVar1;
  *(undefined4 *)(param_1 + 0x324) = uVar1;
  *(undefined4 *)(param_1 + 0x328) = uVar1;
  *(undefined4 *)(param_1 + 0x32c) = uVar1;
  *(undefined4 *)(param_1 + 0x330) = uVar1;
  *(undefined4 *)(param_1 + 0x334) = uVar1;
  *(undefined4 *)(param_1 + 0x338) = uVar1;
  *(undefined4 *)(param_1 + 0x33c) = uVar1;
  return;
}


