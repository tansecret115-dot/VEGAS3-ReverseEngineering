/* Module: mp3plug.dll
   Function: FUN_5f69b880
   Address: 5f69b880
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_5f69b880(void *this,int param_1,undefined4 *param_2)

{
  int iVar1;
  byte *pbVar2;
  HGLOBAL pvVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte local_8;
  byte local_7;
  byte local_6;
  byte local_5;
  undefined1 local_4;
  
  iVar1 = FUN_5f69b6d0((int)this);
  if (-1 < iVar1) {
    *(undefined4 **)((int)this + 0x14) = param_2;
    *(int *)((int)this + 4) = param_1;
    *(int *)this = param_1;
    *(int *)((int)this + 8) = (int)param_2 + param_1;
    iVar1 = FUN_5f69ba70(this);
    if (-1 < iVar1) {
      pbVar2 = *(byte **)this;
      if (pbVar2 < (byte *)(param_1 + *(int *)((int)this + 0x14))) {
        do {
          local_8 = *pbVar2;
          local_7 = pbVar2[1];
          local_6 = pbVar2[2];
          local_5 = pbVar2[3];
          local_4 = 0;
          param_2 = (undefined4 *)FUN_5f69a400(&local_8);
          if (param_2 == (undefined4 *)0x0) {
            if (local_8 == 0) break;
            pvVar3 = GlobalAlloc(0x40,0x28);
            puVar4 = GlobalLock(pvVar3);
joined_r0x5f69b9ca:
            if (puVar4 != (undefined4 *)0x0) {
              puVar4 = (undefined4 *)FUN_5f69a4c0(puVar4);
LAB_5f69b9d3:
              if (puVar4 != (undefined4 *)0x0) {
                uVar5 = (**(code **)*puVar4)(*(undefined4 *)this,*(undefined4 *)((int)this + 8));
                *(undefined4 *)this = uVar5;
                if (param_2 == (undefined4 *)0x0) {
                  uVar5 = 0;
                  uVar6 = 0;
                }
                else {
                  uVar5 = param_2[4];
                  uVar6 = param_2[3];
                }
                FUN_5f69a6d0(puVar4,uVar6,uVar5);
                param_2 = puVar4;
                FUN_5f6b5190(*(int **)((int)this + 0x18),-1,(int *)&param_2,1);
              }
            }
          }
          else {
            switch(param_2[3]) {
            case 0:
              pvVar3 = GlobalAlloc(0x40,0x28);
              puVar4 = GlobalLock(pvVar3);
              goto joined_r0x5f69b9ca;
            case 2:
              pvVar3 = GlobalAlloc(0x40,0x2c);
              puVar4 = GlobalLock(pvVar3);
              if (puVar4 == (undefined4 *)0x0) break;
              puVar4 = FUN_5f69a8b0(puVar4);
              goto LAB_5f69b9d3;
            case 3:
              pvVar3 = GlobalAlloc(0x40,0x38);
              puVar4 = GlobalLock(pvVar3);
              if (puVar4 != (undefined4 *)0x0) {
                puVar4 = FUN_5f69aea0(puVar4);
                goto LAB_5f69b9d3;
              }
              break;
            case 4:
              pvVar3 = GlobalAlloc(0x40,0x2c);
              puVar4 = GlobalLock(pvVar3);
              if (puVar4 != (undefined4 *)0x0) {
                puVar4 = FUN_5f69aa20(puVar4);
                goto LAB_5f69b9d3;
              }
              break;
            case 6:
              pvVar3 = GlobalAlloc(0x40,0x34);
              puVar4 = GlobalLock(pvVar3);
              if (puVar4 != (undefined4 *)0x0) {
                puVar4 = FUN_5f69ab80(puVar4);
                goto LAB_5f69b9d3;
              }
              break;
            case 0xb:
              pvVar3 = GlobalAlloc(0x40,0x48);
              puVar4 = GlobalLock(pvVar3);
              if (puVar4 != (undefined4 *)0x0) {
                puVar4 = FUN_5f69b140(puVar4);
                goto LAB_5f69b9d3;
              }
            }
          }
          pbVar2 = *(byte **)this;
        } while (pbVar2 < (byte *)(param_1 + *(int *)((int)this + 0x14)));
      }
      iVar1 = 0;
    }
  }
  return iVar1;
}


