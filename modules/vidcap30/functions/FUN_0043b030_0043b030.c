/* Module: vidcap30.exe
   Function: FUN_0043b030
   Address: 0043b030
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0043b030(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  uint *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  undefined4 local_34;
  uint local_30;
  undefined4 local_28;
  uint local_24 [9];
  
  local_34 = 0;
  uVar5 = 0xffffffffffffffff;
  local_30 = 0;
  bVar2 = false;
  *(undefined1 *)(param_1 + 0x1af0) = 0;
  iVar3 = FUN_00428e00(param_2);
  if (iVar3 == 0) goto LAB_0043b242;
  puVar4 = local_24;
  for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  local_28 = 0x3f;
  local_34 = 1;
  FUN_0042b900(param_2,&local_28,0);
  if ((local_24[0] != 0xffffffff) && (local_24[1] != 0xffffffff)) {
    if (((int)local_24[1] < 1) || (DAT_005bb204 == 0)) {
      if ((((0 < (int)local_24[0]) && ((*(byte *)(param_1 + 0x1ac4) & 2) != 0)) &&
          (uVar1 = *(uint *)(param_1 + 0x1ac0), (uVar1 & 1) != 0)) && ((uVar1 & 2) != 0)) {
        if ((uVar1 & 0x4100) == 0) {
          *(undefined4 *)(param_1 + 0x1ad4) = 0;
        }
        else {
          if ((uint)(5000 / (ulonglong)DAT_005bb460) <= *(uint *)(param_1 + 0x1ad4)) {
            *(undefined4 *)(param_1 + 0x1ad4) = 0;
            goto LAB_0043b11e;
          }
          *(uint *)(param_1 + 0x1ad4) = *(uint *)(param_1 + 0x1ad4) + 1;
        }
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x1ac8) = 2;
LAB_0043b11e:
      bVar2 = true;
    }
    local_30 = local_24[1];
  }
  uVar5 = FUN_0045bb80(local_24[2],0);
  local_24[0] = ((int)local_24[0] < 0) - 1 & local_24[0];
  local_24[1] = ((int)local_24[1] < 0) - 1 & local_24[1];
  if ((double)CONCAT44(local_24[4],local_24[3]) < _DAT_00589f10) {
    local_24[3] = 0;
    local_24[4] = 0;
  }
  if ((double)CONCAT44(local_24[6],local_24[5]) < _DAT_00589f10) {
    local_24[5] = 0;
    local_24[6] = 0;
  }
  puVar8 = (undefined1 *)(param_1 + 0x1af0);
  SfPrintF(puVar8,"Capturing$: $d frames, $d dropped, $.2f fps, $.2f MB/Sec",local_24[0],local_24[1]
           ,local_24[3],local_24[4],local_24[5],local_24[6]);
  if (DAT_005bb0fc == 0) {
    uVar7 = *(undefined4 *)(param_1 + 0x13cc);
    puVar8 = &DAT_00586c70;
  }
  else {
    uVar7 = *(undefined4 *)(param_1 + 0x13cc);
  }
  FUN_00460850(uVar7,0xc,0,puVar8);
  if (DAT_005bb7f0 != 0) {
    lVar6 = __alldiv(DAT_005bb7f8,DAT_005bb7fc,10000,0);
    if ((lVar6 < 0x100000000) && ((lVar6 < 0 || ((uint)lVar6 <= local_24[2])))) {
      bVar2 = true;
    }
  }
  if (param_4 != 0) {
    FUN_00411120(0);
  }
LAB_0043b242:
  if ((*(byte *)(param_1 + 0x1ae8) & 6) != 0) {
    FUN_0042ea40(param_3,uVar5);
    FUN_0043ae30(param_1);
    FUN_0043b2a0(param_1,local_30);
  }
  if (bVar2) {
    SendMessageA(*(HWND *)(param_1 + 8),0x111,0x1d8,0);
  }
  return local_34;
}


