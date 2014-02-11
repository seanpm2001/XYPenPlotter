#ifndef CPUINFO_H
#define CPUINFO_H

#include <QObject>
#include <QTimer>

class CpuInfo : public QTimer
{
    Q_OBJECT
public:
    CpuInfo(QObject *parent = 0);
    void generateCpuLoad();
    Q_INVOKABLE float getCpuLoad();

private:
    void refreshCpuTicks();

    long totalTicks;
    long idle;
    float cpuLoad;
private slots:
    void tick();
};

#endif // CPUINFO_H