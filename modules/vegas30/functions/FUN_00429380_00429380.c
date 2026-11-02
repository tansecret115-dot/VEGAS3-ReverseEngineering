/* Module: vegas30.exe
   Function: FUN_00429380
   Address: 00429380
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00429380(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  float10 fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined8 local_8;
  
  if (DAT_0064762c == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(DAT_0064762c + 0x80);
  }
  iVar1 = FUN_004292f0();
  if (iVar1 != 0) {
    local_10 = 0;
    local_c = 0;
    local_18 = 0;
    local_14 = 0;
    FUN_004a45b0(DAT_00647630,&local_10,&local_18);
    uVar8 = 0;
    uVar7 = 0;
    uVar6 = 0;
    uVar5 = 0;
    uVar2 = FUN_005ba4b0(*(undefined4 *)(iVar3 + 0x80),0);
    fVar4 = (float10)FUN_005ba670(*(undefined4 *)(iVar3 + 0x80),uVar2,uVar5,uVar6,uVar7,uVar8);
    local_8 = (double)fVar4;
    InterlockedIncrement(&DAT_0065e144);
    uVar5 = 0;
    uVar2 = FUN_005ba4b0(*(undefined4 *)(iVar3 + 0x80),0);
    iVar1 = FUN_005b9fc0(*(undefined4 *)(iVar3 + 0x80),uVar2,uVar5);
    FUN_005a5b50(iVar1 + 0x108,1,local_10,local_c,local_18,local_14,1);
    FUN_005ba030(*(undefined4 *)(iVar3 + 0x80),iVar1,0,1);
    (**(code **)(**(int **)(iVar3 + 0x94) + 0x2c))
              (local_10,local_c,local_18,local_14,(undefined4)local_8,local_8._4_4_);
  }
  return;
}


