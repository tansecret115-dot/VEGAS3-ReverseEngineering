/* Module: mpgmux.dll
   Function: FUN_10006340
   Address: 10006340
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_10006340(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x11a8) = 1;
  *(undefined1 *)(param_1 + 0x25f0) = 1;
  *(undefined1 *)(param_1 + 0x25f1) = 1;
  *(undefined1 *)(param_1 + 0x11c4) = 1;
  *(undefined1 *)(param_1 + 0x2518) = 0;
  *(undefined1 *)(param_1 + 0x2519) = 0;
  *(undefined1 *)(param_1 + 0x251a) = 0;
  *(undefined4 *)(param_1 + 0x25f4) = 0;
  *(undefined4 *)(param_1 + 0x25f8) = 0;
  *(undefined1 *)(param_1 + 0x11ba) = 0;
  *(undefined1 *)(param_1 + 0x11bb) = 0;
  *(undefined4 *)(param_1 + 0x11b0) = 0;
  *(undefined4 *)(param_1 + 0x11c8) = 0;
  *(undefined4 *)(param_1 + 0x2600) = 0;
  *(undefined4 *)(param_1 + 0x2604) = 0;
  *(undefined1 *)(param_1 + 0x11b8) = 0;
  *(undefined1 *)(param_1 + 0x11b9) = 0;
  *(undefined1 *)(param_1 + 0x25fc) = 0;
  *(undefined1 *)(param_1 + 0x25fd) = 0;
  *(undefined4 *)(param_1 + 0x2568) = 1;
  *(undefined4 *)(param_1 + 0x256c) = 1;
  *(undefined1 *)(param_1 + 0x11e8) = 0;
  *(undefined1 *)(param_1 + 0x11e9) = 0;
  *(undefined1 *)(param_1 + 0x2570) = 0;
  *(undefined1 *)(param_1 + 0x2571) = 0;
  *(undefined4 *)(param_1 + 0x11f0) = 0;
  *(undefined4 *)(param_1 + 0x11f4) = 0;
  *(undefined1 *)(param_1 + 0x11eb) = 1;
  *(undefined1 *)(param_1 + 0x11ec) = 0;
  *(undefined1 *)(param_1 + 0x11ed) = 0;
  *(undefined1 *)(param_1 + 0x11ea) = 0;
  *(undefined4 *)(param_1 + 0x2528) = 0;
  *(undefined4 *)(param_1 + 0x252c) = 0;
  *(undefined4 *)(param_1 + 0x2530) = 0;
  *(undefined4 *)(param_1 + 0x2534) = 0;
  *(undefined4 *)(param_1 + 0x24f8) = 0;
  *(undefined4 *)(param_1 + 0x24fc) = 0;
  *(undefined4 *)(param_1 + 0x1460) = 0;
  *(undefined4 *)(param_1 + 0x1464) = 0;
  *(undefined4 *)(param_1 + 0x2e08) = 0;
  *(undefined4 *)(param_1 + 0x2e04) = 0;
  *(undefined4 *)(param_1 + 0x2e00) = 0;
  *(undefined4 *)(param_1 + 0x2e70) = 0;
  *(undefined4 *)(param_1 + 0x2e74) = 0xf;
  *(undefined4 *)(param_1 + 0x2dd8) = 0;
  *(undefined4 *)(param_1 + 0x2e78) = 1;
  *(undefined4 *)(param_1 + 0x2e7c) = 0;
  *(undefined4 *)(param_1 + 0x11fc) = 0;
  *(undefined4 *)(param_1 + 0x1200) = 0;
  *(undefined4 *)(param_1 + 0x1204) = 0;
  *(undefined4 *)(param_1 + 0x1208) = 0;
  *(undefined4 *)(param_1 + 0x120c) = 0;
  *(undefined4 *)(param_1 + 0x1210) = 0;
  *(undefined4 *)(param_1 + 0x11f8) = 0;
  *(undefined4 *)(param_1 + 0x1214) = 0;
  *(undefined4 *)(param_1 + 0x1218) = 0;
  *(undefined4 *)(param_1 + 0x2e9c) = 0;
  *(undefined4 *)(param_1 + 0x2ea0) = 0;
  *(undefined4 *)(param_1 + 0x2ea4) = 0;
  *(undefined4 *)(param_1 + 0x2ea8) = 0;
  *(undefined4 *)(param_1 + 0x2eac) = 0;
  *(undefined4 *)(param_1 + 0x2eb0) = 0;
  *(undefined4 *)(param_1 + 0x2eb4) = 0;
  *(undefined4 *)(param_1 + 0x2eb8) = 0;
  *(undefined4 *)(param_1 + 0x2ddc) = 0;
  *(undefined4 *)(param_1 + 0x11cc) = 0;
  *(undefined4 *)(param_1 + 0x262c) = 0;
  puVar4 = (undefined4 *)(param_1 + 0x1260);
  for (iVar3 = 0x5a; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  puVar4 = (undefined4 *)(param_1 + 0x13c8);
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  puVar4 = (undefined4 *)(param_1 + 0x1408);
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)(param_1 + 0x14b8) = 0;
  *(undefined4 *)(param_1 + 0x14bc) = 0;
  *(undefined4 *)(param_1 + 0x14c0) = 0;
  *(undefined4 *)(param_1 + 0x14c4) = 0;
  *(undefined4 *)(param_1 + 0x14c8) = 0;
  *(undefined4 *)(param_1 + 0x14cc) = 0;
  puVar4 = (undefined4 *)(param_1 + 0x1220);
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)(param_1 + 0x1240) = 0;
  *(undefined4 *)(param_1 + 0x1244) = 0;
  *(undefined4 *)(param_1 + 0x1248) = 0;
  *(undefined4 *)(param_1 + 0x124c) = 0;
  *(undefined4 *)(param_1 + 0x1250) = 0;
  *(undefined4 *)(param_1 + 0x1254) = 0;
  *(undefined4 *)(param_1 + 0x1258) = 0;
  *(undefined4 *)(param_1 + 0x125c) = 0;
  uVar1 = *(uint *)(param_1 + 0x14);
  iVar3 = *(int *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x2608) = uVar1;
  if (*(int *)(param_1 + 0x2c) < 2) {
    *(uint *)(param_1 + 0x24e0) = ((iVar3 + uVar1 * -7) - 0xc) / uVar1;
    uVar2 = (iVar3 + uVar1 * -0x12) - 0xc;
  }
  else {
    *(uint *)(param_1 + 0x24e0) = ((iVar3 + uVar1 * -9) - 0xe) / uVar1;
    uVar2 = (iVar3 + uVar1 * -0x16) - 0xe;
  }
  uVar2 = uVar2 / uVar1;
  iVar3 = *(int *)(param_1 + 0x24e0);
  *(int *)(param_1 + 0x24e8) = iVar3;
  *(int *)(param_1 + 0x24f0) = iVar3;
  *(uint *)(param_1 + 0x24dc) = uVar2;
  *(uint *)(param_1 + 0x24e4) = uVar2 + 5;
  *(uint *)(param_1 + 0x24ec) = uVar2 + 5;
  if (*(int *)(param_1 + 0x2c) == 1) {
    *(uint *)(param_1 + 0x24e4) = uVar2 - 0xf;
    *(int *)(param_1 + 0x24e8) = iVar3 + -0x14;
  }
  return;
}


