/* Module: encn3260.dll
   Function: FUN_66488880
   Address: 66488880
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_66488880(void *this,int param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  void *this_00;
  int *piVar4;
  undefined4 uVar5;
  byte *pbVar6;
  bool bVar7;
  
  pbVar2 = *(byte **)(param_1 + 0x34);
  pbVar6 = &DAT_664e2538;
  do {
    bVar1 = *pbVar2;
    bVar7 = bVar1 < *pbVar6;
    if (bVar1 != *pbVar6) {
LAB_664888bb:
      iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      goto LAB_664888c0;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar7 = bVar1 < pbVar6[1];
    if (bVar1 != pbVar6[1]) goto LAB_664888bb;
    pbVar2 = pbVar2 + 2;
    pbVar6 = pbVar6 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_664888c0:
  if (iVar3 != 0) {
    (**(code **)(**(int **)((int)this + 0x68) + 0x28))(*(int **)((int)this + 0x68),0x80004005);
    return;
  }
  if (*(int *)((int)this + 0x176) != 0) {
    (**(code **)(*(int *)this + 4))();
    iVar3 = (**(code **)**(undefined4 **)((int)this + 0x68))
                      (*(undefined4 **)((int)this + 0x68),&DAT_664dd020,(int)this + 0x172);
    if (iVar3 == 0) {
      this_00 = operator_new(0xc);
      if (this_00 == (void *)0x0) {
        piVar4 = (int *)0x0;
      }
      else {
        piVar4 = FUN_6648aac0(this_00,(int)this);
      }
      *(int **)((int)this + 0x17a) = piVar4;
      (**(code **)(*piVar4 + 4))(piVar4);
      uVar5 = (**(code **)(**(int **)((int)this + 0x78) + 0xc))
                        (*(int **)((int)this + 0x78),*(undefined4 *)((int)this + 0x17a),
                         *(int *)((int)this + 0x18a) * 1000);
      *(undefined4 *)((int)this + 0x182) = uVar5;
    }
  }
  (**(code **)(**(int **)((int)this + 0x68) + 0x28))(*(int **)((int)this + 0x68),0);
  return;
}


