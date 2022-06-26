# ![Medicine16 logo](./assets/Logo64.png) Medicine16

Medicine16 project build a clinic management.

## I. DEMO
[![Demo Medicine16 1](https://lh3.googleusercontent.com/fife/AAWUweUG2FdS6B6QFAI407ojOX304F74stLjYfwspupHB2Wx5NaUeTULc7hLMwFL_PWIjpzEmOuTDlZgGVmgrFjxT76bFqA-skiDUz2lrGDIn59KQPauNg5EjIX7FDY9LXtwbwb9HGJpIh-E2l3xHEmhGI3mMLgRBzfotGg8QvLguCftDBYahBiT0KV2l9ujOqXi1ClP41qEPMFrBZ2KVPjjmFhLitfWLyg_w3oslJ4bZmbrl214Asy6fyzOcOQDHxfgIr2AlFA-gbu8oHBw22EEOMGSqSPf6c36XNlE7Q5-YQSlCTjJLjg-n7n3ZiTTuPx3uNMaoCMV-p2p6AVmI084U5S3P27rlvYAr50CQ_kY7XJyWm6FZNJduMhprKsLWBwMCpSzfyfUByLrFYw8aVV1DJ_Hfq4Att8TV6C10_JaNxSAUjjbp_TT-YTfGTYLT5A_sNK4oc_HC7iaxxtogLKqFji-H6Qgq5eysDZgF2J4qT8lzRz3uvI7-5vI43T3PkvQsPuM_r7xCcLjNuGVX1bivHvdYMHl9sT5SVGWV39HO_gk2R3Ht_qYctEy3ETGqM7fDWnMBCwbYqaOgqIesO7thc_6PESqR0WuLtvxST_mPmbiATLzC4oIici4Hl_9-CQ9FIqlz-qrOIJwIvOafj_dU8jWJcxuRB66rgJ2cwxkeKP8luNLb415YuqlgVT1GNn8Mi7idL3Bb7svz8ReYyy8pKqP4tXAsUPj9fjC-4Pjk8rNVDb7dEoIdFzDqyWNzYSXN5bOdtYphdp7Io6PLG_sAPjuwjMv2GX3Q7jTDL8R7Fq052jyH6TqK-3h_AXCBrMzc5NMep6kGboFBsQnRtcQRXf37juAFgSCZae7aL5DY4XPl5YPK1af7kZ03Bv9_reEw3EWTbI9GEHNjyqcUkIAMSwCUjtD3S71P1qO4dT229AvOdUL1gaqwBVndWwU76b4EMWduvvMkabQE7RQ2JJF_5RtsqYd0E5KViDb6NzAJCY3q6kvstkwAB0rF3z3tWDrrXiMPMHQxE3MUcKu7nxDy29Nq_Rw-OadkfIjQ9l4DY77poUO-8kUHmYXeOcq5_Jsnt_dVRDIvmRIvnWFy5IxrPLJv0QpB3LoWAaky8BnZS7kLrRHfw0nuXIyoarZmME5G9T6MmZSYNTQ4Pl0VwlR--6KjmdtQqCmx9uwgl6uZgov9Rwg5kucWP4ZemD4T65E9MFgMDi1OAukTcZHTc26sMQQwCL-73AEb7Ee5DbUgamxFJWUe7ILI23_9bNZIZfPqG8qSCk=w1600-h800)](https://youtu.be/nFetSCJig7M)

## II. Cài đặt GitHub Desktop

### 1. macOS và Windows

Download tại: [https://desktop.github.com/](https://desktop.github.com/)

### 2. Linux

Download tại: [https://github.com/shiftkey/desktop/releases/](https://github.com/shiftkey/desktop/releases/)

## III. Cài đặt Visual Studio Code (Code Editor)

Download tại: [https://code.visualstudio.com/](https://code.visualstudio.com/)

#### a) Cài đặt tiện tích cho Draw.io

Download tại: [https://marketplace.visualstudio.com/items?itemName=hediet.vscode-drawio](https://marketplace.visualstudio.com/items?itemName=hediet.vscode-drawio)

#### b) Cài đặt tiện tích cho PDF

Download tại: [https://marketplace.visualstudio.com/items?itemName=tomoki1207.pdf](https://marketplace.visualstudio.com/items?itemName=tomoki1207.pdf)

#### c) Cài đặt tiện tích cho Office

Download tại: [https://marketplace.visualstudio.com/items?itemName=cweijan.vscode-office](https://marketplace.visualstudio.com/items?itemName=cweijan.vscode-office)

#### d) Cài đặt tiện tích cho Git

Download tại: [https://marketplace.visualstudio.com/items?itemName=donjayamanne.githistory](https://marketplace.visualstudio.com/items?itemName=donjayamanne.githistory)

## IV. Cài đặt và thiết lập Git

Download tại: [https://git-scm.com/](https://git-scm.com/)

#### Bước 1: Mở Git bash hoặc Terminal để thiết lập git bằng cách sao chép rồi dán vào VSCode và điền thông tin vào đoạn lệnh sau:

```shell
git config --global user.name "Ho Va Ten"
git config --global user.email "username@email.com"

ssh-keygen -t ed25519 -C "username@email.com"

eval "$(ssh-agent -s)"
ssh-add ~/.ssh/id_ed25519
cat ~/.ssh/id_ed25519.pub
```

#### Bước 2: Copy dòng tương tự như vầy:

`ssh-ed25519 ... username@email.com`

#### Bước 3: Thêm SSH keys vào tài khoản của bạn:

Vào trang: [https://github.com/settings/keys](https://github.com/settings/keys) . Sau đó nhấn vào nút `New SSH key` rồi dán vào `Key` rồi đặt tiêu đề. Cuối cùng nhấn vào `Add SSH key`.

## V. Sử dụng Git

#### 1. Các dòng commit (cam kết) cơ bản

* `Create`: Tạo mới một thứ gì đó chưa có.
* `Add`: Thêm một thứ đã có sẵn.
* `Update`: Cập nhật một/hàng loạt thứ gì đó.
* `Modify`: Cập nhật một thay đổi nhỏ.
* `Move`: Di chuyển từ cái này sang cái kia.
* `Remove`: Loại bỏ một thứ gì đó thứ đó có thể thêm trở lại.
* `Rename`: Đổi tên một thứ gì đó.
* `Delete`: Xóa bỏ một thứ gì đó mà mình không đề cập tới nó nữa.

#### 2. Phương thức giao tiếp

1. `Pull` (Download): Kéo các commit về máy tính.
2. `Push` (Upload): Đẩy các commit lên đám mây.
