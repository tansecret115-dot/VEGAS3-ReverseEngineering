/* Module: mcplug.dll
   Function: FUN_00417690
   Address: 00417690
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_00417690(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  void *this;
  int iVar3;
  int iVar4;
  undefined4 unaff_EBX;
  undefined4 unaff_EBP;
  int *unaff_ESI;
  int *piVar5;
  undefined4 local_770;
  undefined4 local_76c;
  undefined4 local_768;
  undefined4 local_764;
  undefined4 local_760;
  int local_75c;
  undefined4 local_758;
  undefined4 local_754;
  undefined4 local_750 [3];
  int aiStack_744 [3];
  undefined4 local_738 [7];
  uchar local_71c [248];
  undefined1 auStack_624 [12];
  WCHAR local_618 [254];
  undefined1 auStack_41c [10];
  undefined2 local_412;
  WCHAR local_410 [254];
  undefined1 auStack_214 [10];
  undefined2 local_20a;
  WCHAR local_208 [259];
  undefined2 local_2;
  
  this = DAT_00487a70;
  iVar4 = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    local_76c = *(undefined4 *)((int)DAT_00487a70 + 0x34);
    local_764 = *(undefined4 *)((int)DAT_00487a70 + 0x38);
    local_768 = *(undefined4 *)((int)DAT_00487a70 + 0x30);
    local_758 = *(undefined4 *)((int)DAT_00487a70 + 0x2c);
    local_75c = param_1;
    iVar4 = FUN_00468f40(DAT_00487a70,local_738,local_750);
    if (-1 < iVar4) {
      local_754 = *(undefined4 *)((int)this + 0xc04);
      local_760 = *(undefined4 *)((int)this + 0x800);
      uVar1 = *(undefined4 *)((int)this + 0x678);
      iVar4 = FUN_00468e50(this,local_71c,0x104);
      if (-1 < iVar4) {
        MultiByteToWideChar(0,1,(LPCSTR)local_71c,-1,local_208,0x104);
        local_2 = 0;
        iVar4 = FUN_00468ef0(this,local_71c,0x104);
        if (-1 < iVar4) {
          MultiByteToWideChar(0,1,(LPCSTR)local_71c,-1,local_410,0x104);
          local_20a = 0;
          iVar4 = FUN_00468ea0(this,local_71c,0x104);
          if (-1 < iVar4) {
            MultiByteToWideChar(0,1,(LPCSTR)local_71c,-1,local_618,0x104);
            iVar3 = local_75c;
            local_412 = 0;
            uVar2 = *(undefined4 *)((int)this + 0x7cc);
            local_770 = 0;
            iVar4 = (**(code **)**(undefined4 **)(local_75c + 0xc))
                              (*(undefined4 **)(local_75c + 0xc),&DAT_00477240,&local_770);
            if (-1 < iVar4) {
              piVar5 = aiStack_744;
              iVar4 = (**(code **)(*unaff_ESI + 0x14))
                                (unaff_ESI,auStack_214,auStack_41c,auStack_624,piVar5,&local_75c,
                                 unaff_EBX,unaff_EBP,local_770,local_764,uVar1,local_76c,local_760,0
                                 ,0,0,uVar2,0);
              if (-1 < iVar4) {
                iVar4 = FUN_00417850(iVar3);
              }
              (**(code **)(*piVar5 + 8))(piVar5);
            }
          }
        }
      }
    }
  }
  return iVar4;
}


