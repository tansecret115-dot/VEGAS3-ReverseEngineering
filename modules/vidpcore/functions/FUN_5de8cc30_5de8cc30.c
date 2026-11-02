/* Module: vidpcore.dll
   Function: FUN_5de8cc30
   Address: 5de8cc30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5de8cc30(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_3c [7];
  CHAR local_20 [31];
  undefined1 local_1;
  
  if (*(HGDIOBJ *)(param_1 + 0x14c) != (HGDIOBJ)0x0) {
    SelectObject(*(HDC *)(param_1 + 0x148),*(HGDIOBJ *)(param_1 + 0x14c));
    puVar2 = (undefined4 *)(param_1 + 0x220);
    puVar3 = local_3c;
    for (iVar1 = 0xf; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    lstrcpynA(local_20,(LPCSTR)(param_1 + 0x23c),0x20);
    local_1 = 0;
    FUN_5de899c0(*(undefined4 *)(param_1 + 0x17c),param_1 + 0x150,*(undefined4 *)(param_1 + 0x2a0),
                 *(undefined4 *)(param_1 + 0x29c),local_3c,*(undefined4 *)(param_1 + 0x25c),
                 *(undefined4 *)(param_1 + 0x260),*(undefined4 *)(param_1 + 0x274),
                 *(undefined4 *)(param_1 + 0x278),*(undefined4 *)(param_1 + 0x27c),
                 *(undefined4 *)(param_1 + 0x280),*(undefined4 *)(param_1 + 0x264),
                 *(undefined4 *)(param_1 + 0x268),*(undefined4 *)(param_1 + 0x26c),
                 *(undefined4 *)(param_1 + 0x270),*(undefined4 *)(param_1 + 0x284),
                 *(undefined4 *)(param_1 + 0x288));
  }
  return 0;
}


