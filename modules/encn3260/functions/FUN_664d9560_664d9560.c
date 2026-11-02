/* Module: encn3260.dll
   Function: FUN_664d9560
   Address: 664d9560
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_664d9560(void *this,int param_1,undefined4 param_2)

{
  char cVar1;
  uint uVar2;
  undefined2 *puVar3;
  uint uVar4;
  
  cVar1 = *(char *)(param_1 + 3);
  if (cVar1 == -0x38) {
    puVar3 = FUN_664d9b50(this,*(uint *)(param_1 + 6));
    uVar4 = *(int *)(param_1 + 10) << 0x10;
    *(uint *)(puVar3 + 0xd) = uVar4;
    *(uint *)(puVar3 + 0xd) = *(uint *)(param_1 + 0xe) >> 0x10 | uVar4;
    *(undefined4 *)(puVar3 + 0xf) = param_2;
    *(undefined4 *)(puVar3 + 0x15) = 1;
    return;
  }
  if (cVar1 == -0x37) {
    FUN_664d9ab0(this,*(uint *)(param_1 + 0x22));
    return;
  }
  if ((cVar1 == -0x35) && (uVar4 = 0, *(char *)(param_1 + 2) != '\0')) {
    do {
      uVar2 = *(uint *)(*(int *)(param_1 + 0x2e) + uVar4 * 4);
      FUN_664d9b10(this,uVar2);
      FUN_664d9be0(this,uVar2);
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(byte *)(param_1 + 2));
  }
  return;
}


